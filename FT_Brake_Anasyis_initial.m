%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% purpose 福田卡车的低速制动分析,加上了brakeswitch；
% data    2020/08/19
% author  zjk
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% clc;clear;close all;
%%
[time,CANlineID,id,direction,unknown,datalength,bite0,bite1,bite2,bite3,bite4,bite5,bite6,bite7]=textread('CH0_2020-11-20_16-43-52.asc','%f%d%s%s%s%d%s%s%s%s%s%s%s%s','headerlines',3);

id1 = find(strcmp(id,'102')); 
t1 = time(id1);
a_y = ((hex2dec(bite4(id1))+hex2dec(bite5(id1))*2^8)+hex2dec(bite6(id1))*2^16+hex2dec(bite7(id1))*2^24);
ay_real = typecast(uint32(a_y),'single');
ay_real = double(ay_real);

figure(7);
plot(t1,ay_real,'b','linewidth',1);
xlabel('time(s)');ylabel('a(m/s^2)');
legend('ay_real');
grid on;

id2 = find(strcmp(id,'101')); 
t2 = time(id2);
a_x = ((hex2dec(bite4(id2))+hex2dec(bite5(id2))*2^8)+hex2dec(bite6(id2))*2^16+hex2dec(bite7(id2))*2^24);
ax_real = typecast(uint32(a_x),'single');

figure(8);
plot(t2,ax_real,'b','linewidth',2);
xlabel('time(s)');ylabel('a(m/s^2)');
legend('ax_real');
grid on;

figure(9);
scatter(ax_real,ay_real,'b*','linewidth',2);
xlabel('ax_real(m/s^2)');ylabel('ay_real(m/s^2)');
legend('g-g');
grid on;


figure(7);
plot(t1,ay_real,'r','linewidth',2);hold on;
plot(t1,ay_real_lvbo,'b--','linewidth',2);
xlabel('ax_real(m/s^2)');ylabel('ay_real(m/s^2)');
legend('g-g');
grid on;

