#ifndef _CUST_BATTERY_METER_TABLE_BYD_H
#define _CUST_BATTERY_METER_TABLE_BYD_H

#define Q_MAX_POS_50_BYD		2303
#define Q_MAX_POS_25_BYD		2267
#define Q_MAX_POS_0_BYD		2009
#define Q_MAX_NEG_10_BYD		1583

#define Q_MAX_POS_50_H_CURRENT_BYD	2274
#define Q_MAX_POS_25_H_CURRENT_BYD	2214
#define Q_MAX_POS_0_H_CURRENT_BYD	1549
#define Q_MAX_NEG_10_H_CURRENT_BYD	829

/* Battery profile data BYD */

#define BATTERY_PROFILE_SIZE_BYD sizeof(battery_profile_t2_BYD) / sizeof(BATTERY_PROFILE_STRUC);
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0_BYD[] =
{
	{0	,	4297},	// VC : 4297	0mA
	{2	,	4270},	// VC : 3918	30mA
	{4	,	4246},	// VC : 3888	60mA
	{6	,	4221},	// VC : 3858	90mA
	{8	,	4188},	// VC : 3820	119mA
	{9	,	4151},	// VC : 3763	149mA
	{11	,	4125},	// VC : 3717	179mA
	{13	,	4107},	// VC : 3692	209mA
	{15	,	4095},	// VC : 3669	239mA
	{17	,	4081},	// VC : 3647	269mA
	{19	,	4065},	// VC : 3628	299mA
	{21	,	4047},	// VC : 3611	329mA
	{23	,	4028},	// VC : 3595	359mA
	{25	,	4010},	// VC : 3579	389mA
	{26	,	3994},	// VC : 3565	419mA
	{28	,	3980},	// VC : 3551	449mA
	{30	,	3967},	// VC : 3537	479mA
	{32	,	3956},	// VC : 3525	509mA
	{34	,	3945},	// VC : 3509	539mA
	{36	,	3932},	// VC : 3497	569mA
	{38	,	3918},	// VC : 3486	599mA
	{40	,	3904},	// VC : 3471	630mA
	{42	,	3891},	// VC : 3460	660mA
	{44	,	3878},	// VC : 3449	690mA
	{45	,	3867},	// VC : 3437	720mA
	{47	,	3856},	// VC : 3426	750mA
	{49	,	3847},	// VC : 3416	780mA
	{51	,	3838},	// VC : 3405	810mA
	{53	,	3831},	// VC : 3397	840mA
	{55	,	3824},	// VC : 3386	870mA
	{57	,	3818},	// VC : 3377	900mA
	{59	,	3812},	// VC : 3368	930mA
	{61	,	3806},	// VC : 3358	960mA
	{63	,	3802},	// VC : 3349	990mA
	{64	,	3799},	// VC : 3338	1020mA
	{66	,	3798},	// VC : 3327	1050mA
	{68	,	3795},	// VC : 3315	1080mA
	{70	,	3793},	// VC : 3303	1110mA
	{72	,	3792},	// VC : 3290	1140mA
	{74	,	3790},	// VC : 3277	1170mA
	{76	,	3789},	// VC : 3261	1200mA
	{78	,	3786},	// VC : 3244	1230mA
	{80	,	3784},	// VC : 3225	1260mA
	{81	,	3781},	// VC : 3206	1290mA
	{83	,	3779},	// VC : 3199	1313mA
	{84	,	3777},	// VC : 3200	1332mA
	{85	,	3775},	// VC : 3199	1348mA
	{86	,	3775},	// VC : 3200	1362mA
	{87	,	3773},	// VC : 3199	1374mA
	{88	,	3772},	// VC : 3199	1386mA
	{88	,	3771},	// VC : 3200	1396mA
	{89	,	3769},	// VC : 3199	1406mA
	{89	,	3768},	// VC : 3200	1415mA
	{90	,	3768},	// VC : 3200	1423mA
	{90	,	3767},	// VC : 3199	1431mA
	{91	,	3765},	// VC : 3199	1439mA
	{91	,	3764},	// VC : 3199	1446mA
	{92	,	3763},	// VC : 3200	1453mA
	{92	,	3762},	// VC : 3199	1459mA
	{93	,	3761},	// VC : 3199	1465mA
	{93	,	3760},	// VC : 3200	1471mA
	{93	,	3759},	// VC : 3199	1477mA
	{94	,	3758},	// VC : 3199	1482mA
	{94	,	3757},	// VC : 3200	1488mA
	{94	,	3756},	// VC : 3200	1492mA
	{95	,	3754},	// VC : 3199	1497mA
	{95	,	3753},	// VC : 3200	1502mA
	{95	,	3752},	// VC : 3200	1507mA
	{95	,	3751},	// VC : 3198	1511mA
	{96	,	3750},	// VC : 3199	1515mA
	{96	,	3748},	// VC : 3199	1519mA
	{96	,	3748},	// VC : 3198	1523mA
	{96	,	3746},	// VC : 3199	1527mA
	{97	,	3745},	// VC : 3199	1531mA
	{97	,	3744},	// VC : 3200	1534mA
	{97	,	3743},	// VC : 3198	1538mA
	{97	,	3741},	// VC : 3198	1541mA
	{98	,	3740},	// VC : 3198	1545mA
	{98	,	3739},	// VC : 3198	1548mA
	{98	,	3738},	// VC : 3198	1551mA
	{98	,	3737},	// VC : 3200	1554mA
	{98	,	3736},	// VC : 3198	1557mA
	{99	,	3734},	// VC : 3200	1560mA
	{99	,	3733},	// VC : 3198	1563mA
	{99	,	3733},	// VC : 3200	1566mA
	{99	,	3731},	// VC : 3199	1568mA
	{99	,	3731},	// VC : 3198	1571mA
	{99	,	3730},	// VC : 3198	1573mA
	{100	,	3729},	// VC : 3198	1576mA
	{100	,	3728},	// VC : 3198	1578mA
	{100	,	3728},	// VC : 3198	1581mA
	{100	,	3400},	// VC : 3200	1583mA
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1_BYD[] =
{
	{0	,	4294},	// VC : 4294	0mA
	{1	,	4258},	// VC : 4062	30mA
	{3	,	4235},	// VC : 4034	60mA
	{4	,	4218},	// VC : 4012	90mA
	{6	,	4200},	// VC : 3992	120mA
	{7	,	4184},	// VC : 3974	150mA
	{9	,	4169},	// VC : 3956	180mA
	{10	,	4155},	// VC : 3939	210mA
	{12	,	4139},	// VC : 3923	240mA
	{13	,	4125},	// VC : 3907	270mA
	{15	,	4111},	// VC : 3891	300mA
	{16	,	4097},	// VC : 3874	330mA
	{18	,	4086},	// VC : 3856	360mA
	{19	,	4074},	// VC : 3836	390mA
	{21	,	4060},	// VC : 3819	420mA
	{22	,	4044},	// VC : 3805	450mA
	{24	,	4028},	// VC : 3792	480mA
	{25	,	4011},	// VC : 3779	510mA
	{27	,	3997},	// VC : 3766	541mA
	{28	,	3984},	// VC : 3754	571mA
	{30	,	3973},	// VC : 3743	601mA
	{31	,	3962},	// VC : 3732	631mA
	{33	,	3951},	// VC : 3720	661mA
	{34	,	3939},	// VC : 3708	691mA
	{36	,	3925},	// VC : 3698	721mA
	{37	,	3911},	// VC : 3686	751mA
	{39	,	3898},	// VC : 3677	780mA
	{40	,	3886},	// VC : 3667	810mA
	{42	,	3874},	// VC : 3658	840mA
	{43	,	3863},	// VC : 3648	870mA
	{45	,	3855},	// VC : 3639	900mA
	{46	,	3846},	// VC : 3629	930mA
	{48	,	3839},	// VC : 3620	959mA
	{49	,	3832},	// VC : 3613	989mA
	{51	,	3825},	// VC : 3604	1019mA
	{52	,	3819},	// VC : 3596	1049mA
	{54	,	3813},	// VC : 3587	1079mA
	{55	,	3808},	// VC : 3580	1109mA
	{57	,	3803},	// VC : 3572	1139mA
	{58	,	3798},	// VC : 3565	1168mA
	{60	,	3794},	// VC : 3559	1198mA
	{61	,	3790},	// VC : 3551	1228mA
	{63	,	3788},	// VC : 3541	1258mA
	{64	,	3787},	// VC : 3533	1288mA
	{66	,	3785},	// VC : 3524	1318mA
	{67	,	3784},	// VC : 3515	1348mA
	{69	,	3782},	// VC : 3504	1378mA
	{70	,	3780},	// VC : 3491	1408mA
	{72	,	3778},	// VC : 3476	1438mA
	{73	,	3776},	// VC : 3458	1468mA
	{75	,	3772},	// VC : 3438	1498mA
	{76	,	3768},	// VC : 3417	1528mA
	{78	,	3764},	// VC : 3393	1558mA
	{79	,	3758},	// VC : 3370	1588mA
	{81	,	3751},	// VC : 3344	1618mA
	{82	,	3743},	// VC : 3320	1648mA
	{84	,	3733},	// VC : 3295	1678mA
	{85	,	3724},	// VC : 3269	1708mA
	{87	,	3713},	// VC : 3242	1738mA
	{88	,	3704},	// VC : 3217	1768mA
	{89	,	3697},	// VC : 3199	1796mA
	{90	,	3694},	// VC : 3199	1815mA
	{91	,	3692},	// VC : 3200	1831mA
	{92	,	3691},	// VC : 3199	1846mA
	{93	,	3689},	// VC : 3200	1859mA
	{93	,	3688},	// VC : 3199	1870mA
	{94	,	3687},	// VC : 3199	1881mA
	{94	,	3686},	// VC : 3199	1891mA
	{95	,	3686},	// VC : 3200	1900mA
	{95	,	3685},	// VC : 3200	1908mA
	{95	,	3684},	// VC : 3200	1916mA
	{96	,	3683},	// VC : 3200	1923mA
	{96	,	3682},	// VC : 3198	1930mA
	{96	,	3681},	// VC : 3198	1936mA
	{97	,	3680},	// VC : 3199	1942mA
	{97	,	3679},	// VC : 3198	1948mA
	{97	,	3677},	// VC : 3197	1954mA
	{98	,	3675},	// VC : 3198	1959mA
	{98	,	3673},	// VC : 3199	1964mA
	{98	,	3670},	// VC : 3200	1969mA
	{98	,	3668},	// VC : 3199	1973mA
	{98	,	3664},	// VC : 3199	1978mA
	{99	,	3660},	// VC : 3199	1982mA
	{99	,	3656},	// VC : 3197	1985mA
	{99	,	3652},	// VC : 3197	1989mA
	{99	,	3647},	// VC : 3199	1992mA
	{99	,	3642},	// VC : 3198	1995mA
	{100	,	3636},	// VC : 3199	1999mA
	{100	,	3631},	// VC : 3198	2001mA
	{100	,	3627},	// VC : 3198	2004mA
	{100	,	3621},	// VC : 3196	2006mA
	{100	,	3400},	// VC : 3197	2009mA
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2_BYD[] =
{
	{0	,	4335},	// VC : 4335	0mA
	{1	,	4315},	// VC : 4241	30mA
	{3	,	4297},	// VC : 4224	60mA
	{4	,	4280},	// VC : 4207	90mA
	{5	,	4265},	// VC : 4192	119mA
	{7	,	4249},	// VC : 4175	149mA
	{8	,	4233},	// VC : 4160	179mA
	{9	,	4218},	// VC : 4146	209mA
	{11	,	4204},	// VC : 4130	239mA
	{12	,	4189},	// VC : 4115	269mA
	{13	,	4174},	// VC : 4099	298mA
	{14	,	4159},	// VC : 4084	328mA
	{16	,	4145},	// VC : 4069	358mA
	{17	,	4131},	// VC : 4055	388mA
	{18	,	4118},	// VC : 4041	418mA
	{20	,	4104},	// VC : 4026	448mA
	{21	,	4090},	// VC : 4013	478mA
	{22	,	4078},	// VC : 3999	507mA
	{24	,	4067},	// VC : 3987	537mA
	{25	,	4054},	// VC : 3972	567mA
	{26	,	4040},	// VC : 3957	597mA
	{28	,	4026},	// VC : 3943	627mA
	{29	,	4013},	// VC : 3929	657mA
	{30	,	4001},	// VC : 3916	686mA
	{32	,	3991},	// VC : 3904	716mA
	{33	,	3980},	// VC : 3893	746mA
	{34	,	3972},	// VC : 3881	776mA
	{36	,	3962},	// VC : 3871	806mA
	{37	,	3952},	// VC : 3860	836mA
	{38	,	3943},	// VC : 3849	866mA
	{39	,	3933},	// VC : 3837	895mA
	{41	,	3924},	// VC : 3828	925mA
	{42	,	3913},	// VC : 3818	955mA
	{43	,	3900},	// VC : 3808	985mA
	{45	,	3883},	// VC : 3797	1015mA
	{46	,	3869},	// VC : 3788	1045mA
	{47	,	3858},	// VC : 3780	1074mA
	{49	,	3848},	// VC : 3771	1104mA
	{50	,	3840},	// VC : 3764	1134mA
	{51	,	3833},	// VC : 3758	1164mA
	{53	,	3827},	// VC : 3751	1194mA
	{54	,	3822},	// VC : 3745	1224mA
	{55	,	3816},	// VC : 3740	1254mA
	{57	,	3811},	// VC : 3735	1283mA
	{58	,	3806},	// VC : 3730	1313mA
	{59	,	3802},	// VC : 3724	1343mA
	{61	,	3798},	// VC : 3719	1373mA
	{62	,	3794},	// VC : 3716	1403mA
	{63	,	3790},	// VC : 3711	1433mA
	{64	,	3786},	// VC : 3708	1462mA
	{66	,	3783},	// VC : 3705	1492mA
	{67	,	3780},	// VC : 3702	1522mA
	{68	,	3777},	// VC : 3700	1552mA
	{70	,	3775},	// VC : 3697	1582mA
	{71	,	3773},	// VC : 3694	1612mA
	{72	,	3771},	// VC : 3692	1642mA
	{74	,	3769},	// VC : 3688	1671mA
	{75	,	3766},	// VC : 3684	1701mA
	{76	,	3763},	// VC : 3679	1731mA
	{78	,	3759},	// VC : 3672	1761mA
	{79	,	3752},	// VC : 3665	1791mA
	{80	,	3745},	// VC : 3656	1821mA
	{82	,	3740},	// VC : 3647	1850mA
	{83	,	3733},	// VC : 3636	1880mA
	{84	,	3723},	// VC : 3623	1910mA
	{86	,	3712},	// VC : 3609	1940mA
	{87	,	3701},	// VC : 3595	1970mA
	{88	,	3687},	// VC : 3580	2000mA
	{90	,	3683},	// VC : 3571	2030mA
	{91	,	3681},	// VC : 3563	2059mA
	{92	,	3678},	// VC : 3552	2089mA
	{93	,	3675},	// VC : 3540	2119mA
	{95	,	3671},	// VC : 3521	2149mA
	{96	,	3656},	// VC : 3487	2179mA
	{97	,	3605},	// VC : 3422	2209mA
	{99	,	3522},	// VC : 3299	2238mA
	{100	,	3394},	// VC : 3110	2268mA
	{100	,	3213},	// VC : 2797	2291mA
	{100	,	3150},	// VC : 2800	2297mA
	{100	,	3108},	// VC : 2792	2300mA
	{100	,	3074},	// VC : 2787	2302mA
	{100	,	3047},	// VC : 2790	2303mA
	{100	,	3025},	// VC : 2790	2304mA
	{100	,	3009},	// VC : 2790	2305mA
	{100	,	2996},	// VC : 2783	2305mA
	{100	,	2996},	// VC : 2789	2306mA
	{100	,	2996},	// VC : 2789	2306mA
	{100	,	2996},	// VC : 2789	2306mA
	{100	,	2996},	// VC : 2789	2306mA
	{100	,	2996},	// VC : 2789	2306mA
	{100	,	2996},	// VC : 2789	2306mA
	{100	,	2996},	// VC : 2789	2306mA
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3_BYD[] =
{
	{0	,	4338},	// VC : 4338	0mA
	{1	,	4317},	// VC : 4260	30mA
	{3	,	4299},	// VC : 4242	60mA
	{4	,	4283},	// VC : 4226	90mA
	{5	,	4266},	// VC : 4210	120mA
	{7	,	4250},	// VC : 4194	150mA
	{8	,	4235},	// VC : 4178	180mA
	{9	,	4219},	// VC : 4163	210mA
	{10	,	4205},	// VC : 4148	240mA
	{12	,	4190},	// VC : 4132	270mA
	{13	,	4174},	// VC : 4117	300mA
	{14	,	4160},	// VC : 4102	330mA
	{16	,	4146},	// VC : 4087	360mA
	{17	,	4132},	// VC : 4069	390mA
	{18	,	4118},	// VC : 4051	420mA
	{20	,	4105},	// VC : 4036	450mA
	{21	,	4092},	// VC : 4021	480mA
	{22	,	4078},	// VC : 4007	510mA
	{23	,	4067},	// VC : 3994	540mA
	{25	,	4054},	// VC : 3980	569mA
	{26	,	4041},	// VC : 3966	599mA
	{27	,	4027},	// VC : 3952	629mA
	{29	,	4014},	// VC : 3937	659mA
	{30	,	4001},	// VC : 3923	689mA
	{31	,	3991},	// VC : 3912	719mA
	{33	,	3981},	// VC : 3900	749mA
	{34	,	3972},	// VC : 3889	778mA
	{35	,	3962},	// VC : 3878	808mA
	{36	,	3952},	// VC : 3868	838mA
	{38	,	3943},	// VC : 3857	868mA
	{39	,	3934},	// VC : 3847	898mA
	{40	,	3924},	// VC : 3837	928mA
	{42	,	3914},	// VC : 3827	957mA
	{43	,	3903},	// VC : 3819	987mA
	{44	,	3891},	// VC : 3811	1018mA
	{46	,	3876},	// VC : 3803	1048mA
	{47	,	3862},	// VC : 3795	1078mA
	{48	,	3851},	// VC : 3787	1108mA
	{49	,	3842},	// VC : 3779	1138mA
	{51	,	3834},	// VC : 3773	1168mA
	{52	,	3828},	// VC : 3766	1198mA
	{53	,	3821},	// VC : 3760	1228mA
	{55	,	3816},	// VC : 3754	1258mA
	{56	,	3810},	// VC : 3749	1288mA
	{57	,	3806},	// VC : 3744	1318mA
	{59	,	3802},	// VC : 3739	1348mA
	{60	,	3797},	// VC : 3734	1378mA
	{61	,	3793},	// VC : 3730	1408mA
	{62	,	3789},	// VC : 3725	1438mA
	{64	,	3786},	// VC : 3721	1468mA
	{65	,	3783},	// VC : 3714	1498mA
	{66	,	3781},	// VC : 3711	1528mA
	{68	,	3778},	// VC : 3708	1557mA
	{69	,	3774},	// VC : 3706	1587mA
	{70	,	3772},	// VC : 3704	1617mA
	{72	,	3770},	// VC : 3702	1647mA
	{73	,	3767},	// VC : 3699	1677mA
	{74	,	3765},	// VC : 3697	1707mA
	{75	,	3762},	// VC : 3692	1737mA
	{77	,	3758},	// VC : 3688	1767mA
	{78	,	3754},	// VC : 3683	1797mA
	{79	,	3748},	// VC : 3675	1827mA
	{81	,	3742},	// VC : 3666	1857mA
	{82	,	3736},	// VC : 3659	1886mA
	{83	,	3729},	// VC : 3649	1916mA
	{84	,	3719},	// VC : 3636	1946mA
	{86	,	3708},	// VC : 3623	1976mA
	{87	,	3696},	// VC : 3608	2006mA
	{88	,	3682},	// VC : 3596	2036mA
	{90	,	3679},	// VC : 3594	2066mA
	{91	,	3676},	// VC : 3591	2096mA
	{92	,	3674},	// VC : 3586	2126mA
	{94	,	3670},	// VC : 3579	2156mA
	{95	,	3665},	// VC : 3571	2186mA
	{96	,	3648},	// VC : 3550	2216mA
	{98	,	3595},	// VC : 3491	2246mA
	{99	,	3512},	// VC : 3395	2276mA
	{100	,	3386},	// VC : 3238	2306mA
	{100	,	3327},	// VC : 3199	2316mA
	{100	,	3302},	// VC : 3198	2321mA
	{100	,	3289},	// VC : 3199	2323mA
	{100	,	3281},	// VC : 3200	2324mA
	{100	,	3275},	// VC : 3199	2325mA
	{100	,	3271},	// VC : 3198	2326mA
	{100	,	3267},	// VC : 3197	2327mA
	{100	,	3267},	// VC : 3199	2327mA
	{100	,	3269},	// VC : 3199	2327mA
	{100	,	3271},	// VC : 3197	2327mA
	{100	,	3272},	// VC : 3195	2327mA
	{100	,	3272},	// VC : 3192	2327mA
	{100	,	3272},	// VC : 3194	2327mA
	{100	,	3272},	// VC : 3199	2327mA
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature_BYD[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
};

#define R_PROFILE_SIZE_BYD sizeof(r_profile_t2_BYD) / sizeof(R_PROFILE_STRUC);
// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0_BYD[] =
{
	{880	,	4297},	// VC : 4297	0mA
	{880	,	4270},	// VC : 3918	30mA
	{895	,	4246},	// VC : 3888	60mA
	{908	,	4221},	// VC : 3858	90mA
	{920	,	4188},	// VC : 3820	119mA
	{970	,	4151},	// VC : 3763	149mA
	{1020	,	4125},	// VC : 3717	179mA
	{1038	,	4107},	// VC : 3692	209mA
	{1065	,	4095},	// VC : 3669	239mA
	{1085	,	4081},	// VC : 3647	269mA
	{1093	,	4065},	// VC : 3628	299mA
	{1090	,	4047},	// VC : 3611	329mA
	{1083	,	4028},	// VC : 3595	359mA
	{1078	,	4010},	// VC : 3579	389mA
	{1073	,	3994},	// VC : 3565	419mA
	{1073	,	3980},	// VC : 3551	449mA
	{1075	,	3967},	// VC : 3537	479mA
	{1078	,	3956},	// VC : 3525	509mA
	{1090	,	3945},	// VC : 3509	539mA
	{1088	,	3932},	// VC : 3497	569mA
	{1080	,	3918},	// VC : 3486	599mA
	{1083	,	3904},	// VC : 3471	630mA
	{1078	,	3891},	// VC : 3460	660mA
	{1073	,	3878},	// VC : 3449	690mA
	{1075	,	3867},	// VC : 3437	720mA
	{1075	,	3856},	// VC : 3426	750mA
	{1078	,	3847},	// VC : 3416	780mA
	{1083	,	3838},	// VC : 3405	810mA
	{1085	,	3831},	// VC : 3397	840mA
	{1095	,	3824},	// VC : 3386	870mA
	{1103	,	3818},	// VC : 3377	900mA
	{1110	,	3812},	// VC : 3368	930mA
	{1120	,	3806},	// VC : 3358	960mA
	{1133	,	3802},	// VC : 3349	990mA
	{1153	,	3799},	// VC : 3338	1020mA
	{1178	,	3798},	// VC : 3327	1050mA
	{1200	,	3795},	// VC : 3315	1080mA
	{1225	,	3793},	// VC : 3303	1110mA
	{1255	,	3792},	// VC : 3290	1140mA
	{1283	,	3790},	// VC : 3277	1170mA
	{1320	,	3789},	// VC : 3261	1200mA
	{1355	,	3786},	// VC : 3244	1230mA
	{1398	,	3784},	// VC : 3225	1260mA
	{1438	,	3781},	// VC : 3206	1290mA
	{1450	,	3779},	// VC : 3199	1313mA
	{1443	,	3777},	// VC : 3200	1332mA
	{1440	,	3775},	// VC : 3199	1348mA
	{1438	,	3775},	// VC : 3200	1362mA
	{1435	,	3773},	// VC : 3199	1374mA
	{1433	,	3772},	// VC : 3199	1386mA
	{1428	,	3771},	// VC : 3200	1396mA
	{1425	,	3769},	// VC : 3199	1406mA
	{1420	,	3768},	// VC : 3200	1415mA
	{1420	,	3768},	// VC : 3200	1423mA
	{1420	,	3767},	// VC : 3199	1431mA
	{1415	,	3765},	// VC : 3199	1439mA
	{1413	,	3764},	// VC : 3199	1446mA
	{1408	,	3763},	// VC : 3200	1453mA
	{1408	,	3762},	// VC : 3199	1459mA
	{1405	,	3761},	// VC : 3199	1465mA
	{1400	,	3760},	// VC : 3200	1471mA
	{1400	,	3759},	// VC : 3199	1477mA
	{1398	,	3758},	// VC : 3199	1482mA
	{1393	,	3757},	// VC : 3200	1488mA
	{1390	,	3756},	// VC : 3200	1492mA
	{1388	,	3754},	// VC : 3199	1497mA
	{1383	,	3753},	// VC : 3200	1502mA
	{1380	,	3752},	// VC : 3200	1507mA
	{1383	,	3751},	// VC : 3198	1511mA
	{1378	,	3750},	// VC : 3199	1515mA
	{1373	,	3748},	// VC : 3199	1519mA
	{1375	,	3748},	// VC : 3198	1523mA
	{1368	,	3746},	// VC : 3199	1527mA
	{1365	,	3745},	// VC : 3199	1531mA
	{1360	,	3744},	// VC : 3200	1534mA
	{1363	,	3743},	// VC : 3198	1538mA
	{1358	,	3741},	// VC : 3198	1541mA
	{1355	,	3740},	// VC : 3198	1545mA
	{1353	,	3739},	// VC : 3198	1548mA
	{1350	,	3738},	// VC : 3198	1551mA
	{1343	,	3737},	// VC : 3200	1554mA
	{1345	,	3736},	// VC : 3198	1557mA
	{1335	,	3734},	// VC : 3200	1560mA
	{1338	,	3733},	// VC : 3198	1563mA
	{1333	,	3733},	// VC : 3200	1566mA
	{1330	,	3731},	// VC : 3199	1568mA
	{1333	,	3731},	// VC : 3198	1571mA
	{1330	,	3730},	// VC : 3198	1573mA
	{1328	,	3729},	// VC : 3198	1576mA
	{1325	,	3728},	// VC : 3198	1578mA
	{1325	,	3728},	// VC : 3198	1581mA
	{500	,	3400},	// VC : 3200	1583mA
};

// T1 0C
R_PROFILE_STRUC r_profile_t1_BYD[] =
{
	{490	,	4294},	// VC : 4294	0mA
	{490	,	4258},	// VC : 4062	30mA
	{503	,	4235},	// VC : 4034	60mA
	{515	,	4218},	// VC : 4012	90mA
	{520	,	4200},	// VC : 3992	120mA
	{525	,	4184},	// VC : 3974	150mA
	{533	,	4169},	// VC : 3956	180mA
	{540	,	4155},	// VC : 3939	210mA
	{540	,	4139},	// VC : 3923	240mA
	{545	,	4125},	// VC : 3907	270mA
	{550	,	4111},	// VC : 3891	300mA
	{558	,	4097},	// VC : 3874	330mA
	{575	,	4086},	// VC : 3856	360mA
	{595	,	4074},	// VC : 3836	390mA
	{603	,	4060},	// VC : 3819	420mA
	{598	,	4044},	// VC : 3805	450mA
	{590	,	4028},	// VC : 3792	480mA
	{580	,	4011},	// VC : 3779	510mA
	{578	,	3997},	// VC : 3766	541mA
	{575	,	3984},	// VC : 3754	571mA
	{575	,	3973},	// VC : 3743	601mA
	{575	,	3962},	// VC : 3732	631mA
	{578	,	3951},	// VC : 3720	661mA
	{578	,	3939},	// VC : 3708	691mA
	{568	,	3925},	// VC : 3698	721mA
	{563	,	3911},	// VC : 3686	751mA
	{553	,	3898},	// VC : 3677	780mA
	{548	,	3886},	// VC : 3667	810mA
	{540	,	3874},	// VC : 3658	840mA
	{538	,	3863},	// VC : 3648	870mA
	{540	,	3855},	// VC : 3639	900mA
	{543	,	3846},	// VC : 3629	930mA
	{548	,	3839},	// VC : 3620	959mA
	{548	,	3832},	// VC : 3613	989mA
	{553	,	3825},	// VC : 3604	1019mA
	{558	,	3819},	// VC : 3596	1049mA
	{565	,	3813},	// VC : 3587	1079mA
	{570	,	3808},	// VC : 3580	1109mA
	{578	,	3803},	// VC : 3572	1139mA
	{583	,	3798},	// VC : 3565	1168mA
	{588	,	3794},	// VC : 3559	1198mA
	{598	,	3790},	// VC : 3551	1228mA
	{618	,	3788},	// VC : 3541	1258mA
	{635	,	3787},	// VC : 3533	1288mA
	{653	,	3785},	// VC : 3524	1318mA
	{673	,	3784},	// VC : 3515	1348mA
	{695	,	3782},	// VC : 3504	1378mA
	{723	,	3780},	// VC : 3491	1408mA
	{755	,	3778},	// VC : 3476	1438mA
	{795	,	3776},	// VC : 3458	1468mA
	{835	,	3772},	// VC : 3438	1498mA
	{878	,	3768},	// VC : 3417	1528mA
	{928	,	3764},	// VC : 3393	1558mA
	{970	,	3758},	// VC : 3370	1588mA
	{1018	,	3751},	// VC : 3344	1618mA
	{1058	,	3743},	// VC : 3320	1648mA
	{1095	,	3733},	// VC : 3295	1678mA
	{1138	,	3724},	// VC : 3269	1708mA
	{1178	,	3713},	// VC : 3242	1738mA
	{1218	,	3704},	// VC : 3217	1768mA
	{1245	,	3697},	// VC : 3199	1796mA
	{1238	,	3694},	// VC : 3199	1815mA
	{1230	,	3692},	// VC : 3200	1831mA
	{1230	,	3691},	// VC : 3199	1846mA
	{1223	,	3689},	// VC : 3200	1859mA
	{1223	,	3688},	// VC : 3199	1870mA
	{1220	,	3687},	// VC : 3199	1881mA
	{1218	,	3686},	// VC : 3199	1891mA
	{1215	,	3686},	// VC : 3200	1900mA
	{1213	,	3685},	// VC : 3200	1908mA
	{1210	,	3684},	// VC : 3200	1916mA
	{1208	,	3683},	// VC : 3200	1923mA
	{1210	,	3682},	// VC : 3198	1930mA
	{1208	,	3681},	// VC : 3198	1936mA
	{1203	,	3680},	// VC : 3199	1942mA
	{1203	,	3679},	// VC : 3198	1948mA
	{1200	,	3677},	// VC : 3197	1954mA
	{1193	,	3675},	// VC : 3198	1959mA
	{1185	,	3673},	// VC : 3199	1964mA
	{1175	,	3670},	// VC : 3200	1969mA
	{1173	,	3668},	// VC : 3199	1973mA
	{1163	,	3664},	// VC : 3199	1978mA
	{1153	,	3660},	// VC : 3199	1982mA
	{1148	,	3656},	// VC : 3197	1985mA
	{1138	,	3652},	// VC : 3197	1989mA
	{1120	,	3647},	// VC : 3199	1992mA
	{1110	,	3642},	// VC : 3198	1995mA
	{1093	,	3636},	// VC : 3199	1999mA
	{1083	,	3631},	// VC : 3198	2001mA
	{1073	,	3627},	// VC : 3198	2004mA
	{1063	,	3621},	// VC : 3196	2006mA
	{508	,	3400},	// VC : 3197	2009mA
};

// T2 25C
R_PROFILE_STRUC r_profile_t2_BYD[] =
{
	{185	,	4335},	// VC : 4335	0mA
	{185	,	4315},	// VC : 4241	30mA
	{183	,	4297},	// VC : 4224	60mA
	{183	,	4280},	// VC : 4207	90mA
	{183	,	4265},	// VC : 4192	119mA
	{185	,	4249},	// VC : 4175	149mA
	{183	,	4233},	// VC : 4160	179mA
	{180	,	4218},	// VC : 4146	209mA
	{185	,	4204},	// VC : 4130	239mA
	{185	,	4189},	// VC : 4115	269mA
	{188	,	4174},	// VC : 4099	298mA
	{188	,	4159},	// VC : 4084	328mA
	{190	,	4145},	// VC : 4069	358mA
	{190	,	4131},	// VC : 4055	388mA
	{193	,	4118},	// VC : 4041	418mA
	{195	,	4104},	// VC : 4026	448mA
	{193	,	4090},	// VC : 4013	478mA
	{198	,	4078},	// VC : 3999	507mA
	{200	,	4067},	// VC : 3987	537mA
	{205	,	4054},	// VC : 3972	567mA
	{208	,	4040},	// VC : 3957	597mA
	{208	,	4026},	// VC : 3943	627mA
	{210	,	4013},	// VC : 3929	657mA
	{213	,	4001},	// VC : 3916	686mA
	{218	,	3991},	// VC : 3904	716mA
	{218	,	3980},	// VC : 3893	746mA
	{228	,	3972},	// VC : 3881	776mA
	{228	,	3962},	// VC : 3871	806mA
	{230	,	3952},	// VC : 3860	836mA
	{235	,	3943},	// VC : 3849	866mA
	{240	,	3933},	// VC : 3837	895mA
	{240	,	3924},	// VC : 3828	925mA
	{238	,	3913},	// VC : 3818	955mA
	{230	,	3900},	// VC : 3808	985mA
	{215	,	3883},	// VC : 3797	1015mA
	{203	,	3869},	// VC : 3788	1045mA
	{195	,	3858},	// VC : 3780	1074mA
	{193	,	3848},	// VC : 3771	1104mA
	{190	,	3840},	// VC : 3764	1134mA
	{188	,	3833},	// VC : 3758	1164mA
	{190	,	3827},	// VC : 3751	1194mA
	{193	,	3822},	// VC : 3745	1224mA
	{190	,	3816},	// VC : 3740	1254mA
	{190	,	3811},	// VC : 3735	1283mA
	{190	,	3806},	// VC : 3730	1313mA
	{195	,	3802},	// VC : 3724	1343mA
	{198	,	3798},	// VC : 3719	1373mA
	{195	,	3794},	// VC : 3716	1403mA
	{198	,	3790},	// VC : 3711	1433mA
	{195	,	3786},	// VC : 3708	1462mA
	{195	,	3783},	// VC : 3705	1492mA
	{195	,	3780},	// VC : 3702	1522mA
	{193	,	3777},	// VC : 3700	1552mA
	{195	,	3775},	// VC : 3697	1582mA
	{198	,	3773},	// VC : 3694	1612mA
	{198	,	3771},	// VC : 3692	1642mA
	{203	,	3769},	// VC : 3688	1671mA
	{205	,	3766},	// VC : 3684	1701mA
	{210	,	3763},	// VC : 3679	1731mA
	{218	,	3759},	// VC : 3672	1761mA
	{218	,	3752},	// VC : 3665	1791mA
	{223	,	3745},	// VC : 3656	1821mA
	{233	,	3740},	// VC : 3647	1850mA
	{243	,	3733},	// VC : 3636	1880mA
	{250	,	3723},	// VC : 3623	1910mA
	{258	,	3712},	// VC : 3609	1940mA
	{265	,	3701},	// VC : 3595	1970mA
	{268	,	3687},	// VC : 3580	2000mA
	{280	,	3683},	// VC : 3571	2030mA
	{295	,	3681},	// VC : 3563	2059mA
	{315	,	3678},	// VC : 3552	2089mA
	{338	,	3675},	// VC : 3540	2119mA
	{375	,	3671},	// VC : 3521	2149mA
	{423	,	3656},	// VC : 3487	2179mA
	{458	,	3605},	// VC : 3422	2209mA
	{558	,	3522},	// VC : 3299	2238mA
	{710	,	3394},	// VC : 3110	2268mA
	{1040	,	3213},	// VC : 2797	2291mA
	{875	,	3150},	// VC : 2800	2297mA
	{790	,	3108},	// VC : 2792	2300mA
	{718	,	3074},	// VC : 2787	2302mA
	{643	,	3047},	// VC : 2790	2303mA
	{588	,	3025},	// VC : 2790	2304mA
	{548	,	3009},	// VC : 2790	2305mA
	{533	,	2996},	// VC : 2783	2305mA
	{518	,	2996},	// VC : 2789	2306mA
	{518	,	2996},	// VC : 2789	2306mA
	{518	,	2996},	// VC : 2789	2306mA
	{518	,	2996},	// VC : 2789	2306mA
	{518	,	2996},	// VC : 2789	2306mA
	{518	,	2996},	// VC : 2789	2306mA
	{518	,	2996},	// VC : 2789	2306mA
};

// T3 50C
R_PROFILE_STRUC r_profile_t3_BYD[] =
{
	{143	,	4338},	// VC : 4338	0mA
	{143	,	4317},	// VC : 4260	30mA
	{143	,	4299},	// VC : 4242	60mA
	{143	,	4283},	// VC : 4226	90mA
	{140	,	4266},	// VC : 4210	120mA
	{140	,	4250},	// VC : 4194	150mA
	{143	,	4235},	// VC : 4178	180mA
	{140	,	4219},	// VC : 4163	210mA
	{143	,	4205},	// VC : 4148	240mA
	{145	,	4190},	// VC : 4132	270mA
	{143	,	4174},	// VC : 4117	300mA
	{145	,	4160},	// VC : 4102	330mA
	{148	,	4146},	// VC : 4087	360mA
	{158	,	4132},	// VC : 4069	390mA
	{168	,	4118},	// VC : 4051	420mA
	{173	,	4105},	// VC : 4036	450mA
	{178	,	4092},	// VC : 4021	480mA
	{178	,	4078},	// VC : 4007	510mA
	{183	,	4067},	// VC : 3994	540mA
	{185	,	4054},	// VC : 3980	569mA
	{188	,	4041},	// VC : 3966	599mA
	{188	,	4027},	// VC : 3952	629mA
	{193	,	4014},	// VC : 3937	659mA
	{195	,	4001},	// VC : 3923	689mA
	{198	,	3991},	// VC : 3912	719mA
	{203	,	3981},	// VC : 3900	749mA
	{208	,	3972},	// VC : 3889	778mA
	{210	,	3962},	// VC : 3878	808mA
	{210	,	3952},	// VC : 3868	838mA
	{215	,	3943},	// VC : 3857	868mA
	{218	,	3934},	// VC : 3847	898mA
	{218	,	3924},	// VC : 3837	928mA
	{218	,	3914},	// VC : 3827	957mA
	{210	,	3903},	// VC : 3819	987mA
	{200	,	3891},	// VC : 3811	1018mA
	{183	,	3876},	// VC : 3803	1048mA
	{168	,	3862},	// VC : 3795	1078mA
	{160	,	3851},	// VC : 3787	1108mA
	{158	,	3842},	// VC : 3779	1138mA
	{153	,	3834},	// VC : 3773	1168mA
	{155	,	3828},	// VC : 3766	1198mA
	{153	,	3821},	// VC : 3760	1228mA
	{155	,	3816},	// VC : 3754	1258mA
	{153	,	3810},	// VC : 3749	1288mA
	{155	,	3806},	// VC : 3744	1318mA
	{158	,	3802},	// VC : 3739	1348mA
	{158	,	3797},	// VC : 3734	1378mA
	{158	,	3793},	// VC : 3730	1408mA
	{160	,	3789},	// VC : 3725	1438mA
	{163	,	3786},	// VC : 3721	1468mA
	{173	,	3783},	// VC : 3714	1498mA
	{175	,	3781},	// VC : 3711	1528mA
	{175	,	3778},	// VC : 3708	1557mA
	{170	,	3774},	// VC : 3706	1587mA
	{170	,	3772},	// VC : 3704	1617mA
	{170	,	3770},	// VC : 3702	1647mA
	{170	,	3767},	// VC : 3699	1677mA
	{170	,	3765},	// VC : 3697	1707mA
	{175	,	3762},	// VC : 3692	1737mA
	{175	,	3758},	// VC : 3688	1767mA
	{178	,	3754},	// VC : 3683	1797mA
	{183	,	3748},	// VC : 3675	1827mA
	{190	,	3742},	// VC : 3666	1857mA
	{193	,	3736},	// VC : 3659	1886mA
	{200	,	3729},	// VC : 3649	1916mA
	{208	,	3719},	// VC : 3636	1946mA
	{213	,	3708},	// VC : 3623	1976mA
	{220	,	3696},	// VC : 3608	2006mA
	{215	,	3682},	// VC : 3596	2036mA
	{213	,	3679},	// VC : 3594	2066mA
	{213	,	3676},	// VC : 3591	2096mA
	{220	,	3674},	// VC : 3586	2126mA
	{228	,	3670},	// VC : 3579	2156mA
	{235	,	3665},	// VC : 3571	2186mA
	{245	,	3648},	// VC : 3550	2216mA
	{260	,	3595},	// VC : 3491	2246mA
	{293	,	3512},	// VC : 3395	2276mA
	{370	,	3386},	// VC : 3238	2306mA
	{320	,	3327},	// VC : 3199	2316mA
	{260	,	3302},	// VC : 3198	2321mA
	{225	,	3289},	// VC : 3199	2323mA
	{203	,	3281},	// VC : 3200	2324mA
	{190	,	3275},	// VC : 3199	2325mA
	{183	,	3271},	// VC : 3198	2326mA
	{175	,	3267},	// VC : 3197	2327mA
	{170	,	3267},	// VC : 3199	2327mA
	{175	,	3269},	// VC : 3199	2327mA
	{185	,	3271},	// VC : 3197	2327mA
	{193	,	3272},	// VC : 3195	2327mA
	{200	,	3272},	// VC : 3192	2327mA
	{195	,	3272},	// VC : 3194	2327mA
	{183	,	3272},	// VC : 3199	2327mA
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature_BYD[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
};
#endif /* _CUST_BATTERY_METER_TABLE_BYD_H */
