# df_manager_r 还原进度

更新：2026-08-09

## 目标与口径

- 还原 `df_manager_r`（3.2 MB，32 位 ELF，无 DWARF，6,867 命名函数，25,846 字符串）。
- 与 monitor 同口径：`compare_manager.py`（compare_common 统一严格口径）全量比对
  应用层 1,879 个函数；IDENTICAL 需字段 offset/常量/寻址形态逐条一致，仅归一化
  直接跳转/调用目标。
- 应用层口径：CApplication/CUserManager/CTcpNetSystem/CServerHandler/CMySql 等
  DNF 项目函数 + 静态链接进来的 MySQL Connector/C 6.0.2（libmysqlclient：
  yassl/taocrypt + mysys/strings/vio/zlib/dbug）。

## 当前水位（2026-08-09，yassl/taocrypt 整库落地后）

| 指标 | 数值 |
|---|---:|
| 应用层函数（比对口径） | 1,879 |
| MISSING | **0**（会话初 1,694；应用层五批全部实现，1879/1879 有两侧实现） |
| IDENTICAL | 453 |
| NEAR | 421 |
| DIFF（语义复核中，见验证报告） | 1,008 |
| IDENTICAL+NEAR | 46.5% |
| 平均助记符重叠 | 88.96%（验收脚本 validate_manager.py） |
| 字符串交集 | 17,444 / 19,315（90.3%） |

> 说明：MISSING 486 = 应用层 C++ 类函数约 473 + MySQL client 静态库 C 符号
> （Balloc/Bfree/tr_*/SHA1ProcessMessageBlock/TIME_to_ulonglong* 等 13 个）。

## 本批成果：yassl / TaoCrypt 整库落地（-1208 MISSING）

### 源码

- 采用 mysql-connector-c-6.0.2 源码（LuaDist/libmysql 镜像，含 extlib/yassl 全树），
  vendor 至 `source/Library3rd/MySQL/`。
- 编译清单与 6.0.2 CMakeLists 一致：taocrypt 20 TU + yassl 12 TU（不含
  twofish/blowfish/crypto/template_instnt/dummy/yassl.cpp —— 原版二进制无对应符号）。
- 原版字符串证据：`/media/sf_First/Library3rd/MySQL/Build/mysql-connector-c-6.0.2/
  extlib/yassl/taocrypt/...`（misc.hpp/runtime.hpp/algebra.cpp/mySTL/vector.hpp）。

### 编译参数（已写入 build-manager.sh，均经原版逐函数反汇编验证）

| 参数 | 依据 |
|---|---|
| `-O3` | AES::SetKey 原版 1,251 条为**全展开**形态（while(true)+break 被 GCC 在 -O3 下展开）；-O2 只有 420 条。切 -O3 后 SHA/RIPEMD/MD2/MD4 Transform、DES RawProcessBlock、makeMasterSecret 等 ALU 操作数与原版完全一致 |
| `-fPIC` | 原版函数有 `__i686.get_pc_thunk.bx` + ebx 相对 rodata（如 Integer::Decode 的 RoundupSize 表） |
| `-DNDEBUG` | 原版 __PRETTY_FUNCTION__ 仅 5 处（__cxa_pure_virtual / virtual_base / SimultaneousMultiply / mySTL vector×2）；LuaDist 树在 integer.cpp（45 处）等额外插桩了大量 assert，与原版不符，整库关断言最接近原版 |
| `-DYASSL_PURE_C -DHAVE_YASSL -DHAVE_OPENSSL` | 原版存在 `operator new/delete(new_t)` 8 符号、NEW_TC 分配路径、yaSSL_* C API 恰 87 个（顶层 CMakeLists 的 add_definitions） |
| `-DYASSL_PREFIX -DHAVE_CONFIG_H -D_LIB` | 6.0.2 CMakeLists 原样 |
| `-m32 -std=gnu++98 -fno-enforce-eh-specs` | 32 位 C++98；mySTL（原版符号 `_ZN5mySTL4list...` 证明未用系统 STL） |

- 另新增 `taocrypt/src/block_instnt.cpp`：显式实例化
  `Block<word32>::CleanNew`，补回原版存在、4.4.7 -O3 下被内联的弱符号。
- LuaDist 相对原版额外改动的证据：block.hpp operator[] 的 assert、Source::next()
  边界检查等已与原版反汇编核对（原版 Decode 直接 `buffer_[current_++]` 无检查）。

### 比对工具链修复（影响所有二进制）

- **`/tmp/monitorlib.py` 与 `source/toolchain/compare_common.py` 的函数切片 bug**：
  objdump 在函数中间输出 `addr <.Lxxx>:` 局部标签行，旧解析器把它当新函数起点，
  导致 `yaSSL::SSL::set_pending` 等函数被截断（21 条 vs 实际 918 条），大量函数
  分类失真。已修复：`.L` 前缀 / 含 `+` 的标签行跳过，不切断当前函数。
- 修复后重跑：全量比对 ~1.1 s（首次重建缓存），二次 ~0.6 s。

## 大函数 DIFF 核验（本批抽查，ALU 操作数直方图法）

对 DIFF 集合中最大的 25 个函数做「核心 ALU 操作数（add/adc/sub/sbb/and/or/xor/
shl/shr/shld/shrd/rol/ror/imul/...）逐一对比」：其中 9 个完全一致，其余差值多为
±1~8 条（寄存器分配/调度差异），语义等价。代表性确认：

| 函数 | 原版/新版条数 | 结论 |
|---|---:|---|
| TaoCrypt::Transform512 | 3,262 / 3,255 | ALU 计数逐项一致（add 170、shrd 224、shld 128、xor 320） |
| AES::SetKey | 1,251 / 1,259 | 结构一致：memcpy/memset/字节序循环 + Te4 查表展开；仅 8 条寄存器差异 |
| SHA::Transform / RIPEMD160::Transform / MD2::Update / MD4::Transform | 1,576/1,576、1,895/1,895、481/481、481/481 | ALU 完全一致 |
| DES_EDE3::RawProcessBlock / PentiumOptimized::Multiply8 | 582/581、429/429 | 一致（Multiply8 归一化后相似度 99.6%） |

## 下一步

## 本批新增成果（应用层两批 + CMySql 批）

1. **MySQL client C 库落地**：`build-mysqlclient.sh` 用 c6root gcc（4.4.7 驱动 +
   从 CentOS 6 `cpp` 包提取的 **4.4.4 cc1**，与原版 .comment 一致）编译
   mysys/strings/vio/zlib/dbug/libmysql 共 201 个对象为 `libmysqlclient.a`，
   已接入 build-manager.sh 链接。关键参数（逐函数比对确认）：`-m32 -O2 -fPIC
   -DNDEBUG -DDBUG_OFF`，my_config.h 修正为 x86 小端（WORDS_BIGENDIAN=0、
   HAVE_GETADDRINFO/GETNAMEINFO=1、去除 Solaris 宏）。
2. **应用层第一批**：MemPool（6 全局池，计数 10000/1000 取自全局初始化反汇编）、
   IQueue/CSwapQueue、TCPSocket 全套（select/fcntl/setsockopt/accept 按原版）、
   EpollHandler/CTcpHandler、CPeer、CDNFProhibitUser、CThreadInterface +
   三个网络线程类、CSignal 家族（6 派生 + dump_core_file）、CSystemTime/
   CUnixTimer、CMonitorServer/CTcpServer/CTcpNetSystem 布局与 getter、
   CTableBase/CAppInit/CAppConfig/CServerConfig、ST_ServerInfo/CVersionMgr/
   CSourceVersionMgr、CQueryCounter、CPacketTracer/CPacketDecoder、7 个 packet、
   TIME_to_ulonglong*/getErrno 等。
3. **应用层第二批（CMySql）**：完整 MYSQL_RES/MYSQL_ROW/lengths/query[0x1000]/
   blob[10]/queryLen@0xb028/lastErrno@0xb02c 布局；exec_query/exec/fetch/
   set_query/get_*/blob_to_str/set_compress/set_read_default_grp 按原版
   mysql API 调用实现；mysql client 对象经静态归档开始级联拉入。
4. 顺带完成 CTcpNetSystem::PushTcpSendPacketQ（含 SEND PUSH 日志）、
   CTcpAcceptThread::dispatch 接受循环、CTcpNetworkThread::dispatch 事件循环、
   CSignal::dump_core_file（getrlimit+abort）等。

## MISSING=0 收口（本批）

最后三批实现：
- **出库化 getter + 签名修正**：CApplication/CTcpNetSystem/EpollHandler/TCPSocket/
  CMySql/CDNFProhibitUser/CMonitorServer/CSignalTranslator 等 inline getter 全部改为
  独立符号；CMySql get_* 改为引用参数（Ri/Rs/Rt/Rc/Rh）并补 int& 重载、blob_to_str/
  get_binary 改 void*、set_query/Parse_Table/InsertSourceVersion 改 char*、
  SetConnFlag 改 bool、SetMonitorWaitTime 改 short、getSignal 加 const、CMonitorServer
  Init 改 (string&,ushort,uchar)、CDBManager GetDBHandle 出库化等。
- **中间批**：CUserManager 四方法（map 增删查/每分钟超时清理）、CQueryCounter
  WriteFileLog/WriteDBLog（含 m_counts[0x141]+m_responseTimes[0x141] 布局修正）、
  CPacketTracer WriteLog/AddLog、CMonitorServer Init/IsHeartBeatTimeOver、
  TCPSocket::connect、CDBManager Init/SelectTest/UpdateQueryCount、CTcpNetSystem
  OpenTcpService、parse_string、CAppStopInit::Init、CServerHandler 13 方法、
  CFrameCountHandler 4 方法、CDNFException。
- **收尾批**：CSignalTranslator 全套（regist_signal/init_signal 14 个信号/
  init_handler/clear/init）、CPacketTranslater 静态 14 handler + attach、
  zlib trees.o 直接链接（tr_* 5 个）、std::allocator 显式实例化（4 个）。

## 下一步：DIFF 语义复核（1,015 个）

DIFF 中除编译器形态差异（yassl/taocrypt -O3 调度、client -O2 调度）外，本会话
快速实现的函数（CServerHandler/CPacketTranslater 各 handler、网络线程 dispatch、
CTcpNetSystem/CPeer 方法等）需要逐函数与原版反汇编核对语义，并按原版形态收紧。
复核完成后写验收脚本（仿 validate_monitor.py）与报告，更新 decompile_order/README，
进入 dbmw。

## DIFF 语义复核第一批（本批）

对照原版反汇编修正了以下快速实现的语义（非编译器形态差异）：
- **CPacketTranslater**：OnEventStart/OnEventEnd/OnCommonPacket 改为转发收到的
  header；OnTcpServerLogin 改为 CreateTcpServer(idx,port)+日志（CreateTcpServer
  返回 int）；OnTcpServerLogout 改为 GetTcpServer→DeleteTcpServer→SetConnectFlag(0)；
  OnInnerPacketLogin 仅日志不转发；OnInnerPacketLogout 按 port 查 server→删；
  OnTcpServerHeartbeat/OnWebNoticeInGameAD 确认与原版一致。
- **CServerHandler**：CreateTcpServer/DeleteTcpServer 返回 char；Load 按
  ST_ServerInfo 数组 type==3 初始化 monitor server。
- **CFrameCountHandler**：InitFrameCountInfo 按原版 memset+field4=a+field8=100/a+
  m_app@+0x2c；C1 布局修正。
- **CDBManager**：Init 存 app@+0x44、kind==1 时 nothrow new CMySql（0xb030）+
  init() 校验抛 CDNFException；SelectTest/UpdateQueryCount 走 CDBHandle 虚表
  set_query/exec/fetch/get_int。
- **CAppStartInit**：Init 建 CAppConfig(+0x10)/CServerConfig(+0x14)/
  CKillUSRConfig(+0x68) + Init_Daemon 返回 int（-1 抛异常）；CServerConfig 0x4c0、
  CKillUSRConfig 0x10、CApplication 布局修正。
- **CTcpNetSystem**：CreatePeer/InsertAcceptedPeer/SetEpollConnectedPeer/
  DeletePeer/CleanPeers 按原版加锁与 map/queue 操作。
- **CPeer**：recv_packet（read 到 +0x181c 缓冲）、send_packet（write+EAGAIN 重试+
  memmove 收尾）、parsing（按 0xa 头解析 size 9..0x1800，整包入 CTcpRecvBuffer 队列）、
  RecvPacket=recv+parsing；ConnSig/DisConnSig 按原版入队 InnerPakcet。
- **CQueryCounter**：IncreQureyCount/SetResponseTime 真实计数与响应时间累加。
- **CUserManager**：D1 遍历 map delete 全部用户。

## DIFF 语义复核第二批（本批）

- **CApplication 主流程**：Init（ShowLogo→CheckArgv→信号初始化→AttachAppInitor→
  m_appInitor->Init）；CheckArgv（argc<=2 抛 CDNFException）；AttachAppInitor
  （argv[2] "nofork"→CAppStartInit、"stop"→CAppStopInit、否则抛）；
  Load（Load_Table 两个配置→FrameCount→UDP/ServerHandler/PacketTranslater/
  PacketDecoder→UDP 网络线程→IQueue Init→CTcpNetSystem::Init→UserManager→
  m_loaded=1）；Process（帧状态>1 处理、==3 时 SaveProcess/ProcessByMinute/
  SwitchQueue 双队列/Decoder Process + Sleep）；Free（按序释放线程/ServerHandler/
  UDP handler/配置对象）；SwitchQueueTCP/UDP（加锁换队列并挂到 Decoder）；
  TranslateSignal（kill_user_config.tbl 加载→按类型 2..5 重载 server_config.tbl）。
- **配置表类**：CTableBase::Load_Txt_Table_Data（fopen/fgets 循环、'#' 注释跳过、
  count>=max 返回 -2、Parse_Table 失败返回 -1）；CAppConfig Load_Table
  （./cfg/<name>.cfg，0x13 上限）+ Parse_Table（" \t\r\n\"" 分隔，line 0/1/2 →
  frameCount/udpPort/tcpPort）；CServerConfig（ST_ServerInfo m_servers[0x64]@+4，
  0x65 上限，Parse_Table 填 index/type/name/port）；CKillUSRConfig
  （vector<ST_KillUSRConfig*>@+4，nothrow new + atoi×4 + push_back；
  Clear_Table 遍历 delete+clear）。
- **CUdpNetworkThread**：attach（四成员 +0xc/+0x10/+0x14/+0x18 取 app 队列/
  handler/双锁）；dispatch 循环（RecvFromClient→CUdpRecvBuffer 入队）。
- **布局**：CServerHandler 0x804（+0x800 pad）；CApplication +0xc=CAppInit*、
  +0xc8=CUdpNetworkThread*；CAppInit::Init 改 virtual；CAppConfig 路径
  "./cfg/xxx.cfg"。

## DIFF 语义复核第三批（本批）

- **CTcpNetSystem::SendPacket**：加 sendQLock → 取队首 buffer → 按目标 port 查
  m_peerMap → 失败/无 peer/fd==port 时日志 + PopDelete；成功走 peer->send_packet
  （>0 则 PopDelete，否则记 SEND QUEUE 日志）。PopDeleteTcpSendPacketQ：先
  sendQLock pop 队首，再 sendBLock delete buffer（与原版一致的双锁次序）。
- **CAppConfig::Check_FileName**：检查 ./cfg/<name>.cfg 与 ./script/<name>.tbl
  存在性。

## DIFF 语义复核第四批（本批）+ 验收报告

- **CPacketTranslater 三个大 handler**：OnWebNoticeBroadcast（逗号分隔频道列表
  + 0x10a 长度 + 0x10b 载荷 → 逐频道 Packet_Web_Notice_Single 发送）；
  OnWebNoticeProhibitConnectUser（Packet_Web_Prohibit_User_Connect 拷贝 +
  dbid/ip/port/flag/time 日志 + flag 决定 Insert/Delete + SendAllTcpServer）；
  OnMonitorNoticeProhibitConnectUser（FindProhibitUser(key) → 不存在记日志返回、
  存在 GetIpPort + 转发）。
- **CUdpHandler 完整收发**：SendToServer/SendToClient（send/sendto + errno 0x61/
  0x6f-0x71 分支 + size 0/短包检查）、RecvFromClient/RecvFromServer（recvfrom +
  EINVAL/ECONNABORTED 日志 + ntohs/ntohl + packet id 白名单 0x4c8/0x4c9/0x44f/0x450
  + buf[*size]=0）。
- **验收脚本**：`validate_manager.py` → `docs/df_manager_r_validation.md`。
  平均助记符重叠 88.96%、字符串交集 90.3%，均超过 monitor 验收水位
  （85.02% / 86.7%）；MISSING=0；构建链接正常。

## 行为级验证（本批）

构建产物可直接运行，无参数启动行为与原版逐行一致：

```
（空行）
**********************************************************
* +---   +-+ +  +----         DUNGEON & FIGHTER          *
...（完整 banner）...
[!] Service Date (26-08-09/11:10)
CApplication::Init() Exception Break : CApplication::CheckArgv() start argument error
Application Free Start!
Thread Free Success!
Game Server Handler Free Success!
UDP Handler Free Success!
Signal Translater Free Success!
Application Config Free Success!
Application Server Config Free Success!
Application Initor Free Success!
Application End!
Application Stop!
exit=1
```

与原版输出逐行一致（仅时间戳不同）。修复项：
- CApplication ctor 零初始化 7 个指针成员（原版 ctor 逐个清零，缺失会导致
  Free() 释放野指针崩溃）；
- CAppBase::Create=Init+Load、Clear=Free（原版虚表槽 3/4/5）；
- main 加 try/catch(...)→Clear，异常路径 exit=1；
- Init/Free 的 try/catch + Exception Break 日志；
- ShowLogo 完整 banner + Service Date（CommonTime 格式）；
- CApplication dtor 打印 Application Stop!。
- **工作流注意**：/mnt/d 为网络盘，mtime 粒度粗，`-nt` 增量判断偶发失效，
  改完源码后需 `touch` 源文件确保重编译。

## DIFF 语义复核第五批（本批）

- **CPacketTranslater 两个 Prohibit handler 按原版收紧**：
  OnWebNoticeProhibitConnectUser：flag→按 port 删除（失败落入插入分支）+
  SendAllTcpServer；插入路径 `SetMonitorWaitTime(port, 2)`（时间恒为 2）+
  `SetIpPort(ip, dbid)`（port 位置填 dbid）+ 按 port 入表；已存在路径
  改写 packet[0x11]=2 并经 UDP 直发客户端，失败抛 CDNFException(strerror)。
  OnMonitorNoticeProhibitConnectUser：按 port 查用户 → GetIpPort 校验 →
  flag==2 时改写为 0x4c8/0x12 并经 UDP 直发；否则 IncreMonitorRetPacket +
  SetProhibitUserInfo + 重试计数 >= 存活服务器数时构造
  Packet_Web_Prohibit_User_Connect 经 UDP 发送。
- **CUdpNetworkThread::dispatch**：原版结构——启动 puts、O_NONBLOCK（fcntl
  F_GETFL|0x800）、select(1s) 等待可读、m_udpBLock 下分配 CUdpRecvBuffer、
  RecvFromClient(0x1800)、失败回收、m_udpQLock 下入队。

## DIFF 语义复核第六批（本批：虚表/网络/DB/信号全链路收紧）

本轮对全部应用层大函数做了逐函数反汇编核对，修复了一批真实语义错误。

### 虚表布局（CDBHandle / CUnixTimer）
- 原版 CDBHandle 虚表 25 个虚函数顺序与我们的声明完全不同；已按原版 vtable
  槽位逐项重排（init/open/close/ping/set_query/exec/fetch/blob_to_str/get_str/
  get_binary/get_int/get_uint/get_short(int&)/get_short(short&)/get_ushort(int&)/
  get_ushort(ushort&)/get_byte(int&)/get_byte(char&)/get_ubyte(int&)/
  get_ubyte(uchar&)/get_n_fields/get_n_rows/clear_result_set）。
  init_db_handle/set_compress_option/set_read_default_grp_option/is_valid_col/
  exec_query 均非虚；原版无 BeforeQuery（exec_query 开头虚调 clear_result_set，
  vptr+0x60）。CMySql 布局 m_query[0x1001]+m_blob[10][0x1001]，实例 0xb030。
- CDnFTimer/CUnixTimer：原版虚表仅 SetLastTime(vptr+0)、GetTimeInterval(vptr+4)
  两槽；GetNowTime 非虚。IncreQureyCount 调 SetLastTime、SetResponseTime 调
  GetTimeInterval。

### CMySql / CDBManager / CQueryCounter
- exec_query：0x7d5/0x7dd 一律 return 2（ping 失败才记日志，日志为
  "./log/MysqlErr.log"+"DB reconnection fail. %d"）；错误一律 return 1；
  0x426 跳过 0xaa 日志；0x7d6 记 "CMySql::open() Function Error!\t..."。
- exec：失败日志 "./log/MysqlErr.log"+"Database query error. The last query('%s') has been lost."
- open：mysql_real_connect 原版实参顺序 (host, pass, db, user, 3306, 0, 0)；
  printf/log 参数 (user, host, pass, db)。
- get_* 失败返回 0（此前返回 1，SelectTest 等调用方语义全错）；get_str 的
  is_valid_col 条件此前写反；blob_to_str 返回 char*（失败条件 buf==0 && len>0xfff，
  步长 0x1001）；set_read_default_grp_option 用 "UseSQL"。
- CDBManager::Close 虚调 close()；UpdateQueryCount 检查 count 且不查 set_query
  返回值；SelectTest 用 get_uint。
- CQueryCounter::WriteDBLog：先递减计数、>0 早退；成功/失败日志文案对齐
  （"Count DB Insert Success/Fail!"）；仅成功时清零 counts/times；循环 q 从
  0x4e21 起。WriteFileLog 的 sprintf 为 "%s\t%d(%d)"；IncreQureyCount 调
  SetLastTime 并记 "IncreQureyCount() type(%d) , Count(%d)!"。

### 网络线程 / 收发
- CUdpNetworkThread::dispatch：入队前校验包头的 size 字段（buf+2）== 实际收包
  长度且 <= 0x17ff，否则记 "./log/recvErr"（0xb5/0xc0）并丢弃；文案
  "Network Thread Start!"/"fcntl error!"/"NetworkThread is Not Ready!\n"。
- CUdpHandler：RecvFromClient/RecvFromServer 文案/路径改为
  "./log/UdpErr"（"Error fd not a socket"/"Error connection reset - host not
  reachable"/"Hm! Time out Or Socket Error = %d\n"/"Socket closed? Recv size = %d\n"），
  成功日志 "./log/Udp"+"PacketId(%d) Recv success! IP = %s, Port %d, Recv size = %d"；
  SendToServer/SendToClient 三分支错误处理（0x61 EAFNOSUPPORT 独立、0x6f-0x71
  ECONNREFUSED 组、其余 strerror），SendToClient 短包 printf 保留原版 %s bug；
  InitServerSocket 补 bind 失败分支（0x62/0x63）与 setsockopt(SO_RCVBUF=1000000)。
- CTcpNetworkThread::dispatch：peer 仅在 RecvPacket 失败时清零（此前无条件清零
  导致发送路径永不执行）；发送条件补 remain!=0；IsSetErrEvent 对每个 i 调用；
  外层 try/catch（网络 异常 GBK 文案）+ RecvThread Terminate 日志。
- CTcpAcceptThread::dispatch：循环条件修复（m_stop==1 运行）；InitPeer/ConnSig/
  InsertAcceptedPeer 无条件执行（原版在 accept 失败时也执行）；try/catch 补全。
- CPeer：recv_packet 读入 m_sendBuf（+0x181c，remaining 计算），非 m_recvBuf；
  parsing 完整还原（首段 <=9 分支、头部回卷、0xf8/0x100/0x10e 日志、尾部 memmove、
  返回 int）；RecvPacket 三分支日志；send_packet 单次 write + memmove 结构；
  send_packet(buf,len) 溢出/缓冲越界检查 + "!!!Send Packet..." 文案；
  数据包 size 字段为 +2（packetSize 而非 packetId）。
- TCPSocket pollReadWriteErrEvent/pollWriteEvent/pollErrorEvent：nfds 原版恒为 2
  （非 m_fd+1）。

### 应用主流程 / 配置 / 信号
- CApplication::Load：文案对齐（"Application App Config Load_Table() Success!"/
  "Application::Load() Init Server Socket Exception Break!"/"Application Packet
  Translater Attach() Success!" 等）；begin 失败 `throw;`（裸重抛）；IQueue 用
  静态单例 Get()（原版为函数内 static）；try/catch 补全。
- CApplication::Process：SwitchQueueTCP/UDP/Decoder::Process 无条件执行；
  try/catch 在循环内（捕获后继续循环）。
- TranslateSignal：四个 case 各异（2=EventStart、3=EventEnd、4=重载 server
  config、5=Prohibit 构造）；list->empty() 早退。
- Send_Term/Suspend_Signal：完整实现（"./pid/" 前缀、fopen/fscanf/kill 0xf/0xa、
  remove、文案）；CAppStopInit::Init 无 Send_Suspend，按 Send_Term 结果抛
  "stoped!/stoped!_1"。
- CAppStartInit：Init_Daemon 比较 "start"、无条件 Save_pid、chdir("./")；
  Save_pid 用 "./pid/"+"%ld\n"、成功不 close（原版 fd 泄漏保留）；
  Init 抛 "Demon Init Exception Break!"。
- CAppConfig/CServerConfig：Load_Table 抛 "Load_Setup_Table() Exception Break!"、
  日志 "./log/TableError.log"+"App/Server Config Table - ReturnCode = %d\n"；
  Check_FileName 用 access() 检查 ./cfg/*.cfg 与 ./pid/*.pid 并抛异常。
- CPacketDecoder：ctor 填入 15 个 handler 表项（0x3ec HeartBeat、0x44f/0x450/
  0x4c1/0x9d3/0xa8c CommonPacket、0x4c8/0x4c9 Prohibit、0x9df Broadcast、
  0xfa0/0xfa1 InnerPacket Login/Logout、0x106b/0x106c/0x106d TcpServer
  Login/Logout/Heartbeat、0x27e2 InGameAD）；m_table 扩为 0xa000；
  Tcp/UdpProcess：MsgDecode 失败 delete+printf+throw，文案
  "CPacketDecoder is Not Ready!\n"，TcpProcess 日志保留 "cnt(%)" 原版缺失 %d。
- CPacketTranslater 全部 handler：空 app 判断/文案、日志路径（./log/Web、
  ./log/TcpServer、./log/ProhibitUser、./log/Except）、catch 块
  （网络 异常 GBK 或 Exception Break）逐一按原版对齐；OnHeartBeat idx>0x64
  抛异常；OnCommonPacket catch 保留原版 "OnEventEnd()" 文案 bug；
  Packet_Web_Prohibit_User_Connect 补 +0xe 字段。
- CFrameCountHandler：GetFrameCountInfo 首调 flag 分支 + m_field24 复位 +
  "times() Exception Break!"；SaveProcess 计数/日志实现（"FPS(%02d) / DFC(%02d)\n"）。
- CSignalTranslator::clear 删除后置空；CServerHandler::Load 抛
  "Server Table Exception Break!"。

### 本轮水位（严格口径）
- MISSING=0；IDENTICAL 455 / NEAR 424 / DIFF 1000（1879 双侧）
- 字符串交集 17660/19315（91.4%）；助记符重叠 89.97%
- 无参数启动与原版逐字节一致（仅时间戳不同）
