@echo off

gpupdate >nul

rem For Client only

ipconfig -w REG -p "HFUT_SECU" -o -x >nul

ipconfig -w REG -p "HFUT_SECU" -x >nul

rem ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/80" -f *+0:80:TCP -n BLOCK -x >nul

rem ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/1434" -f *+0:1434:UDP -n BLOCK -x >nul

rem ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/137" -f *+0:137:UDP -n BLOCK -x >nul

rem ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/138" -f *+0:138:UDP -n BLOCK -x >nul

rem echo ��ֹ�����ھӵ��ļ����䣨ȥ���������е� REM ������Ч����

rem ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/139" -f *+0:139:TCP -n BLOCK -x >nul 

rem echo ��ֹNetBIOS/SMB������ļ��ʹ�ӡ��������SAMBA��ȥ��REM��Ч��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/135" -f *+0:135:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/135" -f *+0:135:UDP -n BLOCK -x >nul

echo ��ֹLocation Service����ͷ�ֹ Dos ������������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/445" -f *+0:445:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/445" -f *+0:445:UDP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1025" -f *+0:1025:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/139" -f *+0:139:UDP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1068" -f *+0:1068:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5554" -f *+0:5554:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9995" -f *+0:9995:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9996" -f *+0:9996:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6129" -f *+0:6129:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block ICMP/255" -f *+0:255:ICMP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/43958" -f *+0:43958:TCP -n BLOCK -x >nul

echo �ر�����Σ�ն˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/20034" -f *+0:20034:TCP -n BLOCK -x >nul

echo �ر�ľ��NetBus Pro���ŵĶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1092" -f *+0:1092:TCP -n BLOCK -x >nul

echo �ر����LoveGate���ŵĶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/3996" -f *+0:3996:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4060" -f *+0:4060:TCP -n BLOCK -x >nul

echo �ر�ľ��RemoteAnything���ŵĶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4590" -f *+0:4590:TCP -n BLOCK -x >nul

echo �ر�ľ��ICQTrojan���ŵĶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1080" -f *+0:1080:TCP -n BLOCK -x >nul

echo ��ֹ����������ɨ�衭������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/113" -f *+0:113:TCP -n BLOCK -x >nul

echo ��ֹAuthentication Service���񡭡�����OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/79" -f *+0:79:TCP -n BLOCK -x >nul

echo ��ֹFingerɨ�衭������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/53" -f *+0:53:UDP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/53" -f *+0:53:TCP -n BLOCK -x >nul

echo ��ֹ���򴫵ݣ�TCP������ƭDNS��UDP��������������ͨ�š�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/707" -f *+0:707:TCP -n BLOCK -x >nul

echo �ر�nachi��没�������˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/808" -f *+0:808:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23" -f *+0:23:TCP -n BLOCK -x >nul

echo �ر�Telnet ��ľ��Tiny Telnet Server�����˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/520" -f *+0:520:TCP -n BLOCK -x >nul

echo �ر�Rip �˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1999" -f *+0:1999:TCP -n BLOCK -x >nul

echo �ر�ľ������BackDoor��Ĭ�Ϸ���˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2001" -f *+0:2001:TCP -n BLOCK -x >nul

echo �ر�������ڶ�2001��Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2023" -f *+0:2023:TCP -n BLOCK -x >nul

echo �ر�ľ������Ripper��Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2583" -f *+0:2583:TCP -n BLOCK -x >nul

echo �ر�ľ������Wincrash v2��Ĭ�Ϸ���˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/3389" -f *+0:3389:TCP -n BLOCK -x >nul

echo �ر�Windows ��Զ�̹����նˣ�Զ�����棩�����˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4444" -f *+0:4444:TCP -n BLOCK -x >nul

echo �ر�msblast������������˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4899" -f *+0:4899:TCP -n BLOCK -x >nul

echo �ر�Զ�̿���������remote administrator)����˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5800" -f *+0:5800:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5900" -f *+0:5900:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/8888" -f *+0:8888:TCP -n BLOCK -x >nul

echo �ر�Զ�̿�������VNC������Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6129" -f *+0:6129:TCP -n BLOCK -x >nul

echo �ر�Dameware�����Ĭ�ϼ����˿ڣ��ɱ䣡����������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6267" -f *+0:6267:TCP -n BLOCK -x >nul

echo �ر�ľ������Ů����Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/660" -f *+0:660:TCP -n BLOCK -x >nul

echo �ر�ľ��DeepThroat v1.0 - 3.1Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6671" -f *+0:6671:TCP -n BLOCK -x >nul

echo �ر�ľ��IndoctrinationĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6939" -f *+0:6939:TCP -n BLOCK -x >nul

echo �ر�ľ��PRIORITYĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7306" -f *+0:7306:TCP -n BLOCK -x >nul

echo �ر�ľ�����羫��Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7511" -f *+0:7511:TCP -n BLOCK -x >nul

echo �ر�ľ�����������Ĭ�����Ӷ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7626" -f *+0:7626:TCP -n BLOCK -x >nul

echo �ر�ľ������Ĭ�϶˿�(ע��ɱ䣡)��������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/8011" -f *+0:8011:TCP -n BLOCK -x >nul

echo �ر�ľ��WAY2.4Ĭ�Ϸ���˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9989" -f *+0:9989:TCP -n BLOCK -x >nul

echo �ر�ľ��InIkillerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/19191" -f *+0:19191:TCP -n BLOCK -x >nul

echo �ر�ľ����ɫ����Ĭ�Ͽ��ŵ�telnet�˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1029" -f *+0:1029:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/20168" -f *+0:20168:TCP -n BLOCK -x >nul

echo �ر�lovegate ��������ŵ��������Ŷ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23444" -f *+0:23444:TCP -n BLOCK -x >nul

echo �ر�ľ�����繫ţĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/27374" -f *+0:27374:TCP -n BLOCK -x >nul

echo �ر�ľ��SUB7Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30100" -f *+0:30100:TCP -n BLOCK -x >nul

echo �ر�ľ��NetSphereĬ�ϵķ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/31337" -f *+0:31337:TCP -n BLOCK -x >nul

echo �ر�ľ��BO2000Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/45576" -f *+0:45576:TCP -n BLOCK -x >nul

echo �رմ��������Ŀ��ƶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/50766" -f *+0:50766:TCP -n BLOCK -x >nul

echo �ر�ľ��SchwindlerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/61466" -f *+0:61466:TCP -n BLOCK -x >nul

echo �ر�ľ��TelecommandoĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/31338" -f *+0:31338:TCP -n BLOCK -x >nul

echo �ر�ľ��Back OrificeĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/8102" -f *+0:8102:TCP -n BLOCK -x >nul

echo �ر�ľ��������͵Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2000" -f *+0:2000:TCP -n BLOCK -x >nul

echo �ر�ľ���ڶ�2000Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/31339" -f *+0:31339:TCP -n BLOCK -x >nul

echo �ر�ľ��NetSpy DKĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2001" -f *+0:2001:TCP -n BLOCK -x >nul

echo �ر�ľ���ڶ�2001Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/31666" -f *+0:31666:TCP -n BLOCK -x >nul

echo �ر�ľ��BOWhackĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/34324" -f *+0:34324:TCP -n BLOCK -x >nul

echo �ر�ľ��BigGluckĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7306" -f *+0:7306:TCP -n BLOCK -x >nul

echo �ر�ľ�����羫��3.0��netspy3.0Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40412" -f *+0:40412:TCP -n BLOCK -x >nul

echo �ر�ľ��The SpyĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40421" -f *+0:40421:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters ParadiseĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/8011" -f *+0:8011:TCP -n BLOCK -x >nul

echo �ر�ľ��wry����С�ӣ�����Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40422" -f *+0:40422:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters Paradise 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23444" -f *+0:23444:TCP -n BLOCK -x >nul

echo �ر�ľ�����繫ţ��netbullĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40423" -f *+0:40423:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters Paradise 2.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23445" -f *+0:23445:TCP -n BLOCK -x >nul

echo �ر�ľ�����繫ţ��netbullĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40426" -f *+0:40426:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters Paradise 3.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/50505" -f *+0:50505:TCP -n BLOCK -x >nul

echo �ر�ľ��Sockets de TroieĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/27374" -f *+0:27374:TCP -n BLOCK -x >nul

echo �ر�ľ��Sub Seven 2.0+��77������ħ��Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/50766" -f *+0:50766:TCP -n BLOCK -x >nul

echo �ر�ľ��ForeĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/53001" -f *+0:53001:TCP -n BLOCK -x >nul

echo �ر�ľ��Remote Windows ShutdownĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/61466" -f *+0:61466:TCP -n BLOCK -x >nul

echo �ر�ľ��TelecommandoĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/121" -f *+0:121:TCP -n BLOCK -x >nul

echo �ر�ľ��BO jammerkillahVĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/666" -f *+0:666:TCP -n BLOCK -x >nul

echo �ر�ľ��Satanz BackdoorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/65000" -f *+0:65000:TCP -n BLOCK -x >nul

echo �ر�ľ��DevilĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1001" -f *+0:1001:TCP -n BLOCK -x >nul

echo �ر�ľ��SilencerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6400" -f *+0:6400:TCP -n BLOCK -x >nul

echo �ر�ľ��The tHingĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1600" -f *+0:1600:TCP -n BLOCK -x >nul

echo �ر�ľ��Shivka-BurkaĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/12346" -f *+0:12346:TCP -n BLOCK -x >nul

echo �ر�ľ��NetBus 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1807" -f *+0:1807:TCP -n BLOCK -x >nul

echo �ر�ľ��SpySenderĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/20034" -f *+0:20034:TCP -n BLOCK -x >nul

echo �ر�ľ��NetBus ProĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1981" -f *+0:1981:TCP -n BLOCK -x >nul

echo �ر�ľ��ShockraveĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1243" -f *+0:1243:TCP -n BLOCK -x >nul

echo �ر�ľ��SubSevenĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1001" -f *+0:1001:TCP -n BLOCK -x >nul

echo �ر�ľ��WebExĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30100" -f *+0:30100:TCP -n BLOCK -x >nul

echo �ر�ľ��NetSphereĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1011" -f *+0:1011:TCP -n BLOCK -x >nul

echo �ر�ľ��Doly TrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1001" -f *+0:1001:TCP -n BLOCK -x >nul

echo �ر�ľ��SilencerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1170" -f *+0:1170:TCP -n BLOCK -x >nul

echo �ر�ľ��Psyber Stream ServerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/20000" -f *+0:20000:TCP -n BLOCK -x >nul

echo �ر�ľ��MilleniumĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1234" -f *+0:1234:TCP -n BLOCK -x >nul

echo �ر�ľ��Ultors TrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/65000" -f *+0:65000:TCP -n BLOCK -x >nul

echo �ر�ľ��Devil 1.03Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1245" -f *+0:1245:TCP -n BLOCK -x >nul

echo �ر�ľ��VooDoo DollĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7306" -f *+0:7306:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1492" -f *+0:1492:TCP -n BLOCK -x >nul

echo �ر�ľ��FTP99CMPĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1170" -f *+0:1170:TCP -n BLOCK -x >nul

echo �ر�ľ��Streaming Audio TrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1999" -f *+0:1999:TCP -n BLOCK -x >nul

echo �ر�ľ��BackDoorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30303" -f *+0:30303:TCP -n BLOCK -x >nul

echo �ر�ľ��Socket23Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2001" -f *+0:2001:TCP -n BLOCK -x >nul

echo �ر�ľ��Trojan CowĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6969" -f *+0:6969:TCP -n BLOCK -x >nul

echo �ر�ľ��GatecrasherĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2023" -f *+0:2023:TCP -n BLOCK -x >nul

echo �ر�ľ��RipperĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/61466" -f *+0:61466:TCP -n BLOCK -x >nul

echo �ر�ľ��TelecommandoĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2115" -f *+0:2115:TCP -n BLOCK -x >nul

echo �ر�ľ��BugsĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/12076" -f *+0:12076:TCP -n BLOCK -x >nul

echo �ر�ľ��GjamerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2140" -f *+0:2140:TCP -n BLOCK -x >nul

echo �ر�ľ��Deep ThroatĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4950" -f *+0:4950:TCP -n BLOCK -x >nul

echo �ر�ľ��IcqTrojenĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2140" -f *+0:2140:TCP -n BLOCK -x >nul

echo �ر�ľ��The InvasorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/16969" -f *+0:16969:TCP -n BLOCK -x >nul

echo �ر�ľ��PriotrityĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2801" -f *+0:2801:TCP -n BLOCK -x >nul

echo �ر�ľ��Phineas PhuckerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1245" -f *+0:1245:TCP -n BLOCK -x >nul

echo �ر�ľ��VodooĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30129" -f *+0:30129:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters ParadiseĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5742" -f *+0:5742:TCP -n BLOCK -x >nul

echo �ر�ľ��WincrashĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/3700" -f *+0:3700:TCP -n BLOCK -x >nul

echo �ر�ľ��Portal of DoomĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2583" -f *+0:2583:TCP -n BLOCK -x >nul

echo �ر�ľ��Wincrash2Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4092" -f *+0:4092:TCP -n BLOCK -x >nul

echo �ر�ľ��WinCrashĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1033" -f *+0:1033:TCP -n BLOCK -x >nul

echo �ر�ľ��NetspyĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4590" -f *+0:4590:TCP -n BLOCK -x >nul

echo �ر�ľ��ICQTrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1981" -f *+0:1981:TCP -n BLOCK -x >nul

echo �ر�ľ��ShockRaveĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5000" -f *+0:5000:TCP -n BLOCK -x >nul

echo �ر�ľ��Sockets de TroieĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/555" -f *+0:555:TCP -n BLOCK -x >nul

echo �ر�ľ��Stealth SpyĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5001" -f *+0:5001:TCP -n BLOCK -x >nul

echo �ر�ľ��Sockets de Troie 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2023" -f *+0:2023:TCP -n BLOCK -x >nul

echo �ر�ľ��Pass RipperĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5321" -f *+0:5321:TCP -n BLOCK -x >nul

echo �ر�ľ��FirehotckerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/666" -f *+0:666:TCP -n BLOCK -x >nul

echo �ر�ľ��Attack FTPĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5400" -f *+0:5400:TCP -n BLOCK -x >nul

echo �ر�ľ��Blade RunnerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/21554" -f *+0:21554:TCP -n BLOCK -x >nul

echo �ر�ľ��GirlFriendĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5401" -f *+0:5401:TCP -n BLOCK -x >nul

echo �ر�ľ��Blade Runner 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/50766" -f *+0:50766:TCP -n BLOCK -x >nul

echo �ر�ľ��Fore SchwindlerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5402" -f *+0:5402:TCP -n BLOCK -x >nul

echo �ر�ľ��Blade Runner 2.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/34324" -f *+0:34324:TCP -n BLOCK -x >nul

echo �ر�ľ��Tiny Telnet ServerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5569" -f *+0:5569:TCP -n BLOCK -x >nul

echo �ر�ľ��Robo-HackĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30999" -f *+0:30999:TCP -n BLOCK -x >nul

echo �ر�ľ��KuangĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6670" -f *+0:6670:TCP -n BLOCK -x >nul

echo �ر�ľ��DeepThroatĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/11000" -f *+0:11000:TCP -n BLOCK -x >nul

echo �ر�ľ��Senna Spy TrojansĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6771" -f *+0:6771:TCP -n BLOCK -x >nul

echo �ر�ľ��DeepThroatĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23456" -f *+0:23456:TCP -n BLOCK -x >nul

echo �ر�ľ��WhackJobĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6969" -f *+0:6969:TCP -n BLOCK -x >nul

echo �ر�ľ��GateCrasherĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/555" -f *+0:555:TCP -n BLOCK -x >nul

echo �ر�ľ��Phase0Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6969" -f *+0:6969:TCP -n BLOCK -x >nul

echo �ر�ľ��PriorityĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5400" -f *+0:5400:TCP -n BLOCK -x >nul

echo �ر�ľ��Blade RunnerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7000" -f *+0:7000:TCP -n BLOCK -x >nul

echo �ر�ľ��Remote GrabĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4950" -f *+0:4950:TCP -n BLOCK -x >nul

echo �ر�ľ��IcqTrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7300" -f *+0:7300:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9989" -f *+0:9989:TCP -n BLOCK -x >nul

echo �ر�ľ��InIkillerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7301" -f *+0:7301:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitor 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9872" -f *+0:9872:TCP -n BLOCK -x >nul

echo �ر�ľ��Portal Of DoomĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7306" -f *+0:7306:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitor 2.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/11223" -f *+0:11223:TCP -n BLOCK -x >nul

echo �ر�ľ��Progenic TrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7307" -f *+0:7307:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitor 3.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/22222" -f *+0:22222:TCP -n BLOCK -x >nul

echo �ر�ľ��Prosiak 0.47Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7308" -f *+0:7308:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitor 4.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/53001" -f *+0:53001:TCP -n BLOCK -x >nul

echo �ر�ľ��Remote Windows ShutdownĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7789" -f *+0:7789:TCP -n BLOCK -x >nul

echo �ر�ľ��ICKillerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5569" -f *+0:5569:TCP -n BLOCK -x >nul

echo �ر�ľ��RoboHackĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9872" -f *+0:9872:TCP -n BLOCK -x >nul

echo �ر�ľ��Portal of DoomĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -x >nul

gpupdate >nul

echo �������� IP ɸѡ������

rem if exist %temp%\ipfilter.reg del %temp%\ipfilter.reg

echo Windows Registry Editor Version 5.00>%temp%\ipfilter.reg

echo.>>%temp%\ipfilter.reg

echo [HKEY_LOCAL_MACHINE\SYSTEM\ControlSet001\Services\Tcpip\Parameters]>>%temp%\ipfilter.reg

echo "EnableSecurityFilters"=dword:00000001>>%temp%\ipfilter.reg

echo.>>%temp%\ipfilter.reg>>%temp%\ipfilter.reg

echo [HKEY_LOCAL_MACHINE\SYSTEM\ControlSet001\Services\Tcpip\Parameters\Interfaces\{F3BBAABC-03A5-4584-A7A0-0251FA38B8B1}]>>%temp%\ipfilter.reg

echo "TCPAllowedPorts"=hex(07):32,00,31,00,00,00,38,00,30,00,00,00,34,00,30,00,30,\>>%temp%\ipfilter.reg

echo 00,30,00,00,00,00,00>>%temp%\ipfilter.reg

echo.>>%temp%\ipfilter.reg

echo [HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\Tcpip\Parameters]>>%temp%\ipfilter.reg

echo "EnableSecurityFilters"=dword:00000001>>%temp%\ipfilter.reg

echo.>>%temp%\ipfilter.reg

echo [HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\Tcpip\Parameters\Interfaces\{F3BBAABC-03A5-4584-A7A0-0251FA38B8B1}]>>%temp%\ipfilter.reg

echo "TCPAllowedPorts"=hex(07):32,00,31,00,00,00,38,00,30,00,00,00,34,00,30,00,30,\>>%temp%\ipfilter.reg

echo 00,30,00,00,00,00,00>>%temp%\ipfilter.reg

echo.>>%temp%\ipfilter.reg

regedit /s %temp%\ipfilter.reg

del %temp%\ipfilter.reg

echo IP ɸѡ�����óɹ���

echo.

echo.

echo ����ϵͳ��������������没����ľ�����ŵ����ţ�

echo.

echo ******** �ر�ע�⣺��Ҫ�رգ��밴��������� Win ���������˲��ԣ� ********

echo.

pause>nul

rem For PC Server

ipconfig -w REG -p "HFUT_SECU" -o -x

ipconfig -w REG -p "HFUT_SECU" -x

rem ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/80" -f *+0:80:TCP -n BLOCK -x

rem ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/1434" -f *+0:1434:UDP -n BLOCK -x

rem ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/3389" -f *+0:3389:TCP -n BLOCK -x

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/445" -f *+0:445:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/445" -f *+0:445:UDP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1025" -f *+0:1025:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/139" -f *+0:139:UDP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1068" -f *+0:1068:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5554" -f *+0:5554:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9995" -f *+0:9995:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9996" -f *+0:9996:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6129" -f *+0:6129:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block ICMP/255" -f *+0:255:ICMP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/43958" -f *+0:43958:TCP -n BLOCK -x >nul

echo �ر�����Σ�ն˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/20034" -f *+0:20034:TCP -n BLOCK -x >nul

echo �ر�ľ��NetBus Pro���ŵĶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1092" -f *+0:1092:TCP -n BLOCK -x >nul

echo �ر����LoveGate���ŵĶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/3996" -f *+0:3996:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4060" -f *+0:4060:TCP -n BLOCK -x >nul

echo �ر�ľ��RemoteAnything���ŵĶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4590" -f *+0:4590:TCP -n BLOCK -x >nul

echo �ر�ľ��ICQTrojan���ŵĶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1080" -f *+0:1080:TCP -n BLOCK -x >nul

echo ��ֹ����������ɨ�衭������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/113" -f *+0:113:TCP -n BLOCK -x >nul

echo ��ֹAuthentication Service���񡭡�����OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/79" -f *+0:79:TCP -n BLOCK -x >nul

echo ��ֹFingerɨ�衭������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block UDP/53" -f *+0:53:UDP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/53" -f *+0:53:TCP -n BLOCK -x >nul

echo ��ֹ���򴫵ݣ�TCP������ƭDNS��UDP��������������ͨ�š�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/707" -f *+0:707:TCP -n BLOCK -x >nul

echo �ر�nachi��没�������˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/808" -f *+0:808:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23" -f *+0:23:TCP -n BLOCK -x >nul

echo �ر�Telnet ��ľ��Tiny Telnet Server�����˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/520" -f *+0:520:TCP -n BLOCK -x >nul

echo �ر�Rip �˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1999" -f *+0:1999:TCP -n BLOCK -x >nul

echo �ر�ľ������BackDoor��Ĭ�Ϸ���˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2001" -f *+0:2001:TCP -n BLOCK -x >nul

echo �ر�������ڶ�2001��Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2023" -f *+0:2023:TCP -n BLOCK -x >nul

echo �ر�ľ������Ripper��Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2583" -f *+0:2583:TCP -n BLOCK -x >nul

echo �ر�ľ������Wincrash v2��Ĭ�Ϸ���˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/3389" -f *+0:3389:TCP -n BLOCK -x >nul

echo �ر�Windows ��Զ�̹����նˣ�Զ�����棩�����˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4444" -f *+0:4444:TCP -n BLOCK -x >nul

echo �ر�msblast������������˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4899" -f *+0:4899:TCP -n BLOCK -x >nul

echo �ر�Զ�̿���������remote administrator)����˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5800" -f *+0:5800:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5900" -f *+0:5900:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/8888" -f *+0:8888:TCP -n BLOCK -x >nul

echo �ر�Զ�̿�������VNC������Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6129" -f *+0:6129:TCP -n BLOCK -x >nul

echo �ر�Dameware�����Ĭ�ϼ����˿ڣ��ɱ䣡����������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6267" -f *+0:6267:TCP -n BLOCK -x >nul

echo �ر�ľ������Ů����Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/660" -f *+0:660:TCP -n BLOCK -x >nul

echo �ر�ľ��DeepThroat v1.0 - 3.1Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6671" -f *+0:6671:TCP -n BLOCK -x >nul

echo �ر�ľ��IndoctrinationĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6939" -f *+0:6939:TCP -n BLOCK -x >nul

echo �ر�ľ��PRIORITYĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7306" -f *+0:7306:TCP -n BLOCK -x >nul

echo �ر�ľ�����羫��Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7511" -f *+0:7511:TCP -n BLOCK -x >nul

echo �ر�ľ�����������Ĭ�����Ӷ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7626" -f *+0:7626:TCP -n BLOCK -x >nul

echo �ر�ľ������Ĭ�϶˿�(ע��ɱ䣡)��������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/8011" -f *+0:8011:TCP -n BLOCK -x >nul

echo �ر�ľ��WAY2.4Ĭ�Ϸ���˿ڡ�������OK��

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9989" -f *+0:9989:TCP -n BLOCK -x >nul

echo �ر�ľ��InIkillerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/19191" -f *+0:19191:TCP -n BLOCK -x >nul

echo �ر�ľ����ɫ����Ĭ�Ͽ��ŵ�telnet�˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1029" -f *+0:1029:TCP -n BLOCK -x >nul

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/20168" -f *+0:20168:TCP -n BLOCK -x >nul

echo �ر�lovegate ��������ŵ��������Ŷ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23444" -f *+0:23444:TCP -n BLOCK -x >nul

echo �ر�ľ�����繫ţĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/27374" -f *+0:27374:TCP -n BLOCK -x >nul

echo �ر�ľ��SUB7Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30100" -f *+0:30100:TCP -n BLOCK -x >nul

echo �ر�ľ��NetSphereĬ�ϵķ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/31337" -f *+0:31337:TCP -n BLOCK -x >nul

echo �ر�ľ��BO2000Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/45576" -f *+0:45576:TCP -n BLOCK -x >nul

echo �رմ��������Ŀ��ƶ˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/50766" -f *+0:50766:TCP -n BLOCK -x >nul

echo �ر�ľ��SchwindlerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/61466" -f *+0:61466:TCP -n BLOCK -x >nul

echo �ر�ľ��TelecommandoĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/31338" -f *+0:31338:TCP -n BLOCK -x >nul

echo �ر�ľ��Back OrificeĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/8102" -f *+0:8102:TCP -n BLOCK -x >nul

echo �ر�ľ��������͵Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2000" -f *+0:2000:TCP -n BLOCK -x >nul

echo �ر�ľ���ڶ�2000Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/31339" -f *+0:31339:TCP -n BLOCK -x >nul

echo �ر�ľ��NetSpy DKĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2001" -f *+0:2001:TCP -n BLOCK -x >nul

echo �ر�ľ���ڶ�2001Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/31666" -f *+0:31666:TCP -n BLOCK -x >nul

echo �ر�ľ��BOWhackĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/34324" -f *+0:34324:TCP -n BLOCK -x >nul

echo �ر�ľ��BigGluckĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7306" -f *+0:7306:TCP -n BLOCK -x >nul

echo �ر�ľ�����羫��3.0��netspy3.0Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40412" -f *+0:40412:TCP -n BLOCK -x >nul

echo �ر�ľ��The SpyĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40421" -f *+0:40421:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters ParadiseĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/8011" -f *+0:8011:TCP -n BLOCK -x >nul

echo �ر�ľ��wry����С�ӣ�����Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40422" -f *+0:40422:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters Paradise 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23444" -f *+0:23444:TCP -n BLOCK -x >nul

echo �ر�ľ�����繫ţ��netbullĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40423" -f *+0:40423:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters Paradise 2.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23445" -f *+0:23445:TCP -n BLOCK -x >nul

echo �ر�ľ�����繫ţ��netbullĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40426" -f *+0:40426:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters Paradise 3.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/50505" -f *+0:50505:TCP -n BLOCK -x >nul

echo �ر�ľ��Sockets de TroieĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/27374" -f *+0:27374:TCP -n BLOCK -x >nul

echo �ر�ľ��Sub Seven 2.0+��77������ħ��Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/50766" -f *+0:50766:TCP -n BLOCK -x >nul

echo �ر�ľ��ForeĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/53001" -f *+0:53001:TCP -n BLOCK -x >nul

echo �ر�ľ��Remote Windows ShutdownĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/61466" -f *+0:61466:TCP -n BLOCK -x >nul

echo �ر�ľ��TelecommandoĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/121" -f *+0:121:TCP -n BLOCK -x >nul

echo �ر�ľ��BO jammerkillahVĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/666" -f *+0:666:TCP -n BLOCK -x >nul

echo �ر�ľ��Satanz BackdoorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/65000" -f *+0:65000:TCP -n BLOCK -x >nul

echo �ر�ľ��DevilĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1001" -f *+0:1001:TCP -n BLOCK -x >nul

echo �ر�ľ��SilencerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6400" -f *+0:6400:TCP -n BLOCK -x >nul

echo �ر�ľ��The tHingĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1600" -f *+0:1600:TCP -n BLOCK -x >nul

echo �ر�ľ��Shivka-BurkaĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/12346" -f *+0:12346:TCP -n BLOCK -x >nul

echo �ر�ľ��NetBus 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1807" -f *+0:1807:TCP -n BLOCK -x >nul

echo �ر�ľ��SpySenderĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/20034" -f *+0:20034:TCP -n BLOCK -x >nul

echo �ر�ľ��NetBus ProĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1981" -f *+0:1981:TCP -n BLOCK -x >nul

echo �ر�ľ��ShockraveĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1243" -f *+0:1243:TCP -n BLOCK -x >nul

echo �ر�ľ��SubSevenĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1001" -f *+0:1001:TCP -n BLOCK -x >nul

echo �ر�ľ��WebExĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30100" -f *+0:30100:TCP -n BLOCK -x >nul

echo �ر�ľ��NetSphereĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1011" -f *+0:1011:TCP -n BLOCK -x >nul

echo �ر�ľ��Doly TrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1001" -f *+0:1001:TCP -n BLOCK -x >nul

echo �ر�ľ��SilencerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1170" -f *+0:1170:TCP -n BLOCK -x >nul

echo �ر�ľ��Psyber Stream ServerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/20000" -f *+0:20000:TCP -n BLOCK -x >nul

echo �ر�ľ��MilleniumĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1234" -f *+0:1234:TCP -n BLOCK -x >nul

echo �ر�ľ��Ultors TrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/65000" -f *+0:65000:TCP -n BLOCK -x >nul

echo �ر�ľ��Devil 1.03Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1245" -f *+0:1245:TCP -n BLOCK -x >nul

echo �ر�ľ��VooDoo DollĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7306" -f *+0:7306:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1492" -f *+0:1492:TCP -n BLOCK -x >nul

echo �ر�ľ��FTP99CMPĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1170" -f *+0:1170:TCP -n BLOCK -x >nul

echo �ر�ľ��Streaming Audio TrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1999" -f *+0:1999:TCP -n BLOCK -x >nul

echo �ر�ľ��BackDoorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30303" -f *+0:30303:TCP -n BLOCK -x >nul

echo �ر�ľ��Socket23Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2001" -f *+0:2001:TCP -n BLOCK -x >nul

echo �ر�ľ��Trojan CowĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6969" -f *+0:6969:TCP -n BLOCK -x >nul

echo �ر�ľ��GatecrasherĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2023" -f *+0:2023:TCP -n BLOCK -x >nul

echo �ر�ľ��RipperĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/61466" -f *+0:61466:TCP -n BLOCK -x >nul

echo �ر�ľ��TelecommandoĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2115" -f *+0:2115:TCP -n BLOCK -x >nul

echo �ر�ľ��BugsĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/12076" -f *+0:12076:TCP -n BLOCK -x >nul

echo �ر�ľ��GjamerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2140" -f *+0:2140:TCP -n BLOCK -x >nul

echo �ر�ľ��Deep ThroatĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4950" -f *+0:4950:TCP -n BLOCK -x >nul

echo �ر�ľ��IcqTrojenĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2140" -f *+0:2140:TCP -n BLOCK -x >nul

echo �ر�ľ��The InvasorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/16969" -f *+0:16969:TCP -n BLOCK -x >nul

echo �ر�ľ��PriotrityĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2801" -f *+0:2801:TCP -n BLOCK -x >nul

echo �ر�ľ��Phineas PhuckerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1245" -f *+0:1245:TCP -n BLOCK -x >nul

echo �ر�ľ��VodooĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30129" -f *+0:30129:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters ParadiseĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5742" -f *+0:5742:TCP -n BLOCK -x >nul

echo �ر�ľ��WincrashĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/3700" -f *+0:3700:TCP -n BLOCK -x >nul

echo �ر�ľ��Portal of DoomĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2583" -f *+0:2583:TCP -n BLOCK -x >nul

echo �ر�ľ��Wincrash2Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4092" -f *+0:4092:TCP -n BLOCK -x >nul

echo �ر�ľ��WinCrashĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1033" -f *+0:1033:TCP -n BLOCK -x >nul

echo �ر�ľ��NetspyĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4590" -f *+0:4590:TCP -n BLOCK -x >nul

echo �ر�ľ��ICQTrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1981" -f *+0:1981:TCP -n BLOCK -x >nul

echo �ر�ľ��ShockRaveĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5000" -f *+0:5000:TCP -n BLOCK -x >nul

echo �ر�ľ��Sockets de TroieĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/555" -f *+0:555:TCP -n BLOCK -x >nul

echo �ر�ľ��Stealth SpyĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5001" -f *+0:5001:TCP -n BLOCK -x >nul

echo �ر�ľ��Sockets de Troie 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2023" -f *+0:2023:TCP -n BLOCK -x >nul

echo �ر�ľ��Pass RipperĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5321" -f *+0:5321:TCP -n BLOCK -x >nul

echo �ر�ľ��FirehotckerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/666" -f *+0:666:TCP -n BLOCK -x >nul

echo �ر�ľ��Attack FTPĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5400" -f *+0:5400:TCP -n BLOCK -x >nul

echo �ر�ľ��Blade RunnerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/21554" -f *+0:21554:TCP -n BLOCK -x >nul

echo �ر�ľ��GirlFriendĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5401" -f *+0:5401:TCP -n BLOCK -x >nul

echo �ر�ľ��Blade Runner 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/50766" -f *+0:50766:TCP -n BLOCK -x >nul

echo �ر�ľ��Fore SchwindlerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5402" -f *+0:5402:TCP -n BLOCK -x >nul

echo �ر�ľ��Blade Runner 2.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/34324" -f *+0:34324:TCP -n BLOCK -x >nul

echo �ر�ľ��Tiny Telnet ServerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5569" -f *+0:5569:TCP -n BLOCK -x >nul

echo �ر�ľ��Robo-HackĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30999" -f *+0:30999:TCP -n BLOCK -x >nul

echo �ر�ľ��KuangĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6670" -f *+0:6670:TCP -n BLOCK -x >nul

echo �ر�ľ��DeepThroatĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/11000" -f *+0:11000:TCP -n BLOCK -x >nul

echo �ر�ľ��Senna Spy TrojansĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6771" -f *+0:6771:TCP -n BLOCK -x >nul

echo �ر�ľ��DeepThroatĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23456" -f *+0:23456:TCP -n BLOCK -x >nul

echo �ر�ľ��WhackJobĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6969" -f *+0:6969:TCP -n BLOCK -x >nul

echo �ر�ľ��GateCrasherĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/555" -f *+0:555:TCP -n BLOCK -x >nul

echo �ر�ľ��Phase0Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6969" -f *+0:6969:TCP -n BLOCK -x >nul

echo �ر�ľ��PriorityĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5400" -f *+0:5400:TCP -n BLOCK -x >nul

echo �ر�ľ��Blade RunnerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7000" -f *+0:7000:TCP -n BLOCK -x >nul

echo �ر�ľ��Remote GrabĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4950" -f *+0:4950:TCP -n BLOCK -x >nul

echo �ر�ľ��IcqTrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7300" -f *+0:7300:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9989" -f *+0:9989:TCP -n BLOCK -x >nul

echo �ر�ľ��InIkillerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7301" -f *+0:7301:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitor 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9872" -f *+0:9872:TCP -n BLOCK -x >nul

echo �ر�ľ��Portal Of DoomĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7306" -f *+0:7306:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitor 2.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/11223" -f *+0:11223:TCP -n BLOCK -x >nul

echo �ر�ľ��Progenic TrojanĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7307" -f *+0:7307:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitor 3.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1999" -f *+0:1999:TCP -n BLOCK -x >nul

echo �ر�ľ��BackDoorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5800" -f *+0:5800:TCP -n BLOCK -x >nul

echo �ر�Զ�̿�������VNCĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5900" -f *+0:5900:TCP -n BLOCK -x >nul

echo �ر�Զ�̿�������VNCĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/22222" -f *+0:22222:TCP -n BLOCK -x >nul

echo �ر�ľ��Prosiak 0.47Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7626" -f *+0:7626:TCP -n BLOCK -x >nul

echo �ر�ľ������Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/4444" -f *+0:4444:TCP -n BLOCK -x >nul

echo �ر�ľ��msblastĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7308" -f *+0:7308:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitor 4.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6129" -f *+0:6129:TCP -n BLOCK -x >nul

echo �ر�Զ�̿���������dameware nt utilities)Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2023" -f *+0:2023:TCP -n BLOCK -x >nul

echo �ر�ľ��RipperĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1245" -f *+0:1245:TCP -n BLOCK -x >nul

echo �ر�ľ��VooDoo DollĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/121" -f *+0:121:TCP -n BLOCK -x >nul

echo �ر�ľ��BO jammerkillahVĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/456" -f *+0:456:TCP -n BLOCK -x >nul

echo �ر�ľ��Hackers ParadiseĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/555" -f *+0:555:TCP -n BLOCK -x >nul

echo �ر�ľ��Stealth SpyĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/666" -f *+0:666:TCP -n BLOCK -x >nul

echo �ر�ľ��Satanz BackdoorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1001" -f *+0:1001:TCP -n BLOCK -x >nul

echo �ر�ľ��SilencerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/1033" -f *+0:1033:TCP -n BLOCK -x >nul

echo �ر�ľ��NetspyĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7000" -f *+0:7000:TCP -n BLOCK -x >nul

echo �ر�ľ��Remote GrabĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7300 " -f *+0:7300:TCP -n BLOCK -x >nul

echo �ر�ľ��NetMonitorĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23456 " -f *+0:23456:TCP -n BLOCK -x >nul

echo �ر�ľ��Ugly FTPĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/23456 " -f *+0:23456:TCP -n BLOCK -x >nul

echo �ر�ľ��Ugly FTPĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/30100 " -f *+0:30100:TCP -n BLOCK -x >nul

echo �ر�ľ��NetSphereĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9872" -f *+0:9872:TCP -n BLOCK -x >nul

echo �ر�ľ��Portal of DoomĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9899" -f *+0:9899:TCP -n BLOCK -x >nul

echo �ر�ľ��iNi-KillerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/50505" -f *+0:50505:TCP -n BLOCK -x >nul

echo �ر�ľ��Sockets de TroieĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/6939" -f *+0:6939:TCP -n BLOCK -x >nul

echo �ر�ľ��IndoctrinationĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/11000" -f *+0:11000:TCP -n BLOCK -x >nul

echo �ر�ľ��Senna SpyĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/12223" -f *+0:12223:TCP -n BLOCK -x >nul

echo �ر�ľ��Hack?99 KeyLoggerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/12362" -f *+0:12362:TCP -n BLOCK -x >nul

echo �ر�ľ��Whack-a-mole 1.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/20000" -f *+0:20000:TCP -n BLOCK -x >nul

echo �ر�ľ��MilleniumĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2583" -f *+0:2583:TCP -n BLOCK -x >nul

echo �ر�ľ��Wincrash v2Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/53001" -f *+0:53001:TCP -n BLOCK -x >nul

echo �ر�ľ��Remote Windows ShutdownĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/7789" -f *+0:7789:TCP -n BLOCK -x >nul

echo �ر�ľ��ICKillerĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/40426" -f *+0:40426:TCP -n BLOCK -x >nul

echo �ر�ľ��Masters Paradise 3.xĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/5569" -f *+0:5569:TCP -n BLOCK -x >nul

echo �ر�ľ��RoboHackĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/8000" -f *+0:8000:TCP -n BLOCK -x >nul

echo �ر�ľ��huigeziĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9872" -f *+0:9872:TCP -n BLOCK -x >nul

echo �ر�ľ��Portal of DoomĬ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2005" -f *+0:2005:TCP -n BLOCK -x >nul

echo �ر�ľ���ڶ�2005Ĭ�Ϸ���˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/2000" -f *+0:2000:TCP -n BLOCK -x >nul

echo �رղʺ���1.2Ĭ�϶˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -r "Block TCP/9999" -f *+0:9999:TCP -n BLOCK -x >nul

echo �ر�huigeziӳ��Ĭ�϶˿ڡ�������OK!

ipconfig -w REG -p "HFUT_SECU" -x >nul

gpupdate >nul

echo.

echo ������ϣ�����ϵͳ��������������没��������ľ�����ŵ����ţ�

echo ��ע����������ϵͳ��ɱ��������������������ļ������