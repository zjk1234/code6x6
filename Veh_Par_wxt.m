%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% date:2019年2月16日
% author:wxt
% purpose:重庆两栖车 整车基本参数 控制参数

% B轮样车参数调整，date:20190715，author:wxt
% C轮样车参数调整，date:20200507，author:wxt
%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% 车辆基本参数
g=9.81;%重力加速度
Radius=0.4572/2;%主动轮半径0.2m
% Radius=0.19;%主动轮半径0.19m
% Radius=0.20;%主动轮半径0.19m
Mass=1600;
% Mass=3700;
G=Mass*g;
L1=1.45;
L2=1.45;
L=L1+L2;%履带接地长
% L=2.5;%履带接地长
% L=3.12;%履带接地长
B=1.8;%两侧履带中心距
% B=2.035;%两侧履带中心距
% B=2.25;%两侧履带中心距
eff_tran=0.9;%传动系效率
% eff_tran=0.75;%传动系效率
tras_ratio=8;
% tras_ratio=8.2;
% tras_ratio=6.2;



%电机基本参数
spd_map_mot=[0 499.85 999.79 1500 2000 2500 3000 3500 4000 4500 4999.8 5999.8];
trq_map_mot=[70.5 70.012 71.154 65.797 53.917 45.159 38.073 32.685 27.48 17.133 14.949 10.07];
% spd_map_mot1=[0 500 1000 1500 2000 2500 3000 3500 4000 4500 4999.8 5500 5999.8];
% trq_map_mot1=[12.7 12.756 12.956 12.643 12.873 12.784 13.104 11.045 9.888 8.768 7.706 7.178 6.504];
% spd_map_mot=[600 1200 1800 2400 3000 3600 4200 4800 6000 6600 7200 7800 8400 9000];
% trq_map_mot=[110 110 110 110 55 40 32 27 20 18.6 16.8 15 13.7 12];
% spd_map_mot=[0 200 400 600 800 1000]*tras_ratio;
% trq_map_mot=[1000 1000 500 334 250 200]/tras_ratio;
spdmax=6000;%电机最高转速rpm
% spdmax=900*tras_ratio;%电机最高转速rpm
% trqmax=1000/tras_ratio;%电机最大力矩
% spd_map_mot=[0 100 200 300 360 400 500 600 700 800 900]*tras_ratio;
% trq_map_mot=[1200 1200 1200 1200 1200 1080 864 720 617 540 480]/tras_ratio;
% spdmax=900*tras_ratio;%电机最高转速rpm
% trqmax=1200/tras_ratio;%电机最大力矩
trqmax=70.5;%剩余力矩限制包括行进转向
trqmaxneg=-70.5;%剩余力矩限制包括行进转向，由于标定量不能含有表达式，所示才有了这个量，奥义克斯
trqmax_yd=70.5;%原地转向力矩限制
trqmax_zx=70.5;%直行力矩限制
% trqmax=122.0;%剩余力矩限制包括行进转向
% trqmaxneg=-122.0;%剩余力矩限制包括行进转向，由于标定量不能含有表达式，所示才有了这个量，奥义克斯
% trqmax_yd=122.0;%原地转向力矩限制
% trqmax_zx=122.0;%直行力矩限制
% trqmax=193.5;%剩余力矩限制包括行进转向
% trqmax_yd=200;%原地转向力矩限制
% trqmax_zx=200;%直行力矩限制
%制动压力与制动0-100的关系
bratrq_max=4*1255;%在路面状况识别模块没有做出来之前，最大制动力先按照这个计算
brakepre_dem_data=[0 1 2 3 4 5 6 7 8 9 10];%单位Mpa
brakeTrq_dem_data=[0 125 251 376 502 627 753 878 1004 1129 1255];%单位Nm
premax=100;%制动系统最大压力10MPA                                                                                                        六乘六都按0-100的制动来处理，最后查表0-100 对应0-900000的编码值
% bratrq_max=4*2618.376;%在路面状况识别模块没有做出来之前，最大制动力先按照这个计算
% brakepre_dem_data=[0 1 2 3 4 5 6 7 8 9 10 11 12];%单位Mpa
% brakeTrq_dem_data=[0 218.198 436.396 654.594 872.792 1090.99 1309.188 1527.386 1745.584 1963.782 2181.98 2400.178 2618.376];%单位Nm
% premax=12;%制动系统最大压力10MPA

zhuanxiang_youmen=[-100 0 100];
zhuanxiang_bianmazhi=[-400000 0 400000];

zhidong_youmen=[0 100];
zhidong_bianmazhi=[-140000 750000];
% zhidong_bianmazhi_c=[-140000 750000];

acc_spdctl=[0 100];
spd_spdctl=[0 500];

zhuanxiang_up=400000;
zhuanxiang_down=-400000;

zhidong_up=750000;
zhidong_down=-140000;

bra_em=100;



%% 控制参数
%% 整车模式判断相关参数
v_thr_park=5;     %驻车车速阈值，小于5km/h可进入驻车模式
speed_thr_park=5/3.6/Radius*tras_ratio*30/pi;     %驻车电机转速阈值，小于5km/h可进入驻车模式，不要忘记电动轮的减速比
% 原地转向
acc_thr1=5;  %前进或者后退模式中，当加速遥杆小于5%的时候，就认为无前进或者后退需求，是原地转向需求。

%% ABS功能相关参数 
ABS_switch=0;  %ABS开关，0关闭，1开启

ComBrk_switch=0;%复合制动开关，0关闭，1开启

s_opt_yi=0.15;%最优滑移率
s_opt_yi_add=0.05;  %判断车轮滑移时，为了实现Rely的功能的门限值
%ABS模块pid参数
kp3=1;
ki3=1;
kd3=1;
%制动能量回收门限值
v_thr1_b=5;%小于5km/h进行机械制动
v_thr2_b=20;%5-15之间进行复合制动
v_thr3_b=20;%大于20才进行防抱死判断

%% TCS功能相关参数
TCS_switch=0;%TCS开关，0关闭，1开启
TCS_switch=ecucoder_cal(TCS_switch);
% 左转时，右前（后）轮滑转，pid参数
kp2=300;
% kp2=ecucoder_cal(kp2);
ki2=1;
% ki2=ecucoder_cal(ki2);
kd2=0;
% kd2=ecucoder_cal(kd2);

s_opt_zhuan=0.8;%最优滑转率
% s_opt_zhuan=ecucoder_cal(s_opt_zhuan);

s_opt_zhuan_table=[0.8 0.8 0.3 0.3];
v_table=[0 5 20 100];     %单位km/h
s_opt_zhuan_add=0.05;%判断车轮滑转时，为了实现Rely的功能的门限值

v_gain=0.9;
% v_gain=ecucoder_cal(v_gain);

%% ESP相关参数
ESP_switch=0;%ESP开关，0关闭，1开启
ESP_switch=ecucoder_cal(ESP_switch);
%车身稳定性控制系统
kp1=500;
kp1=ecucoder_cal(kp1);
ki1=1;
ki1=ecucoder_cal(ki1);
kd1=0;
kd1=ecucoder_cal(kd1);

ag_thr=0.1*g;  %转向时侧向加速度阈值
ag_thr=ecucoder_cal(ag_thr);

%% ZSJP直驶纠偏模块控制参数
ZSJP_switch=0;%ZSJP直驶纠偏开关，0关闭，1开启

k1=0.8;
% k2=3;
Dy_thr1=2;%开始规划双曲线的阈值，初设2m
R_thr1=500;%当接近抛物线顶点时候，会规划一条近似直线的路径，避免之，所以设置了这个半径阈值。

Dx_thr1=20;%双曲线，路径规划，当再前进20米时候，偏距小于某个阈值。
D_thr2_chu=0;%就是双曲线，横向偏距的阈值。

Dy_thr3=0.1;% 当双曲线规划是2参数时，会出现收敛非常慢的情况（航向角非常小，横向偏距又不那么小的时候），规划的转弯半径很大很大很大，为了抑制这种情况，当横向偏距大于这个值时候，转弯半径小于某一阈值。
phi_thr1=0.01;
R_thr2=500; %2参数双曲线规划的半径阈值。

phi_thr2=pi/8;

%dis_east初始值
dis_east_initial=0;  %单位 m 
dis_east_sign=1;

%dis_north初始值
dis_north_initial=0;  %单位 m 
dis_north_sign=1;

%dis_sky初始值
dis_sky_initial=0;   %单位 m 
dis_sky_sign=1;
%航向角度初始值
hangxiangangle_initial=0;  %单位 度   
hangxiangangle_sign=1;
%% 容错控制相关标定参数
RC_switch=1;
RC_switch=ecucoder_cal(RC_switch);
%原地转向时，一侧双电机故障，为原地转向，而施加的制动力
bra_pre_yd=10/2;
% bra_pre_yd=12/2;
%紧急制动模式，给的制动压力

% bra_pre_em=12;
% 同侧双电机故障，施加的制动压力
bra_pre_gz2=100/3;         %按照0-100的制动强度来处理，最后查表                                         
bra_pre_gz34=10/3;
% bra_pre_gz2=12/3;
% bra_pre_gz34=12/3;

%% 为A轮样车跑高速，功率跟随标定量。
TrqDifReqGen=30;%当需求功率和发电机发电功率差值小于30Nm时候，以发电机发电功率对应的转矩为上限值发送给电机。

TrqReqULim=40;%需求功率允许每秒上升的转矩值。
TrqReqLLim=-20;%需求功率允许每秒下降的转矩值。
dT=0.02;%运行步长0.02s。

%电机使能信号，当电机输入电压大于300V时候，电机使能
Voltage_enable_thr=300;

%% 为解决低速大转向工况下转向不灵敏的问题，临时设的标定量，纯电制动开关，为了观察电机制动的效果。
PureEleBra_switch=0;  %纯电制动开关，0关闭，1开启

deltaT_weight=0.7;%转向力矩差的分配权重，初步思想是增加一侧增加的大一些，减小一侧，减小的小一些

deltaTdec_weight=1;%转向力矩差如果还是平均分配的原则，为了消除车速猛冲的现象，减小侧减小力矩多一些。

deltaTtotal_weight=1;%转向力矩差放大倍数。
