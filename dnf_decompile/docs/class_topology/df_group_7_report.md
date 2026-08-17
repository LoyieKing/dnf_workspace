# G7 组报告：安全 / 反外挂 / 加密域拓扑还原

> 二进制：`df_game_r`（elf32-i386，36,360,954 B）｜分析方式：demangled 符号表 + objdump 全量反汇编交叉验证 + Ghidra 语料（/tmp/packet_master_corpus.txt）
> 类清单：/tmp/df_group_7_classes.txt（186 类）；其中 ≥20 符号 10 类（XNuclear 307、cUserHistoryLog 143、Sanicova::CPad 40、CRijndael 33、__slang_filter__FlexLexer 29、Secu_GoldControl 25、XorRand8 24、XNuclear::CHades 23、XorRand4 20、ServiceRestrictManager 20），<20 符号长尾 176 类。
> 已参考：docs/hades_protocol.md（Hades 协议还原结论直接采纳并交叉验证）。

## 0. 命名约定说明

- 本二进制**只有小写 `cUserHistoryLog`**（143 符号，对象位于 `CUser+0x79700`）；不存在大写 `CUserHistoryLog` 类，任务书中两者应视为同一类。
- `CHackAnalyzer`（WongWork::CHackAnalyzer）归属 G8 组，但它是本组所有外挂检测器的**汇合点**，报告中作为跨组依赖列出。
- `CLocalChinaErrorDispatcher` 不在本组类清单中（属于 China 安全域），因任务书点名，作为跨组引用单独小节。

---

## 1. 核心类深挖表

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---|---|---|---|---|
| XNuclear | 307 | Hades 命名空间 + 静态数据。307 个符号几乎全是 `r` 节 `PACKET_SEND_TIME` 局部常量（每个 TU 一个同名 static const，307 处地址，疑为按包号预置的“发包时间”表/阈值，内容含版本串 "cain/diregie/first/release" 与 30/32/45/60/62/21/1000/1000/-1/260/ptr/10/10/4096 头）。方法只有 CHades/CHades_GameSvr | PACKET_SEND_TIME（数据表） | XNuclear::CHades | Hades 上报 | 中 |
| XNuclear::CHades | 23 | 每用户 Hades 上报客户端（对象 CUser+0x8e954，44 B）。登录/登出/疲劳/经验/金币/安全状态/外挂计数 9 种 TCP 包 + UserStatus；`Send_HackType/Send_ChangeGold/Send_ChangeSecurity/Send_ReturnToVillage` 为**空桩** | Init/needLogin/GetIP、Send_Login/Send_Logout/Send_UserStatus、GoldPlus/GoldMinus/GoldTracking、AddHackTypeCnt、StdCateUpdate、ChangeSecurity、RunHadesAction、UseFatigue、ExpUp | CUser、Secu_GoldControl、Secu_AccountHacking、CHackAnalyzer、CHadesServerProxy | Hades 反外挂上报 | 高 |
| XNuclear::CHades_GameSvr | 4 | 仅 ctor/dtor 的空标记类型（GameSvr 侧配置占位） | — | — | Hades | 中 |
| CHadesServerProxy | 14 | Hades 服务器连接代理（全局单例 `GlobalData::s_hades_proxy` @BSS 0x940be34，0x30e1c B）：TCP 数据通道 + UDP 心跳；断线→OnDisconnect→RunConnTimer→Timer_HadesHeartBeat(60s)；服务端指令 0xfe7→ConnTcpHadesSvr 触发全服补发登录 | HadesSvrInit、ConnTcpHadesSvr、InitUdp、SendHeartBeatPacket、SendHadesTcpPacket/SendHadesUdpPacket、Parsing、OnDisconnect、RunConnTimer、IsConnect | CNetwork<100000,100000>、CUdpHandler、CEnvironment、Timer_HadesHeartBeat | Hades 通信 | 高 |
| Secu_GoldControl | 25 | 每用户金币管控（对象紧邻 CHades，CUser+0x8e980）：普通/导入/拍卖三通道金币增减、总额与次数统计、日检、邮件/交易结算、SavetoDB；增减均联动 `CHades::GoldPlus/GoldMinus(reason 0/1/2)`，拍卖大额联动 GoldTracking(4) | AddMoney/AddImportMoney/AddAuctionMoney、SubMoney/SubImportMoney/SubAuctionMoney、AddGold/SubGold、CheckDate/CheckMoneyRange、MailGold/MailSameMid/MailComplete、TradeComplete、SavetoDB、resetRangeMoney | CUser、CHades、user_gold_info | 金币反外挂/管控 | 高 |
| Secu_AccountHacking | 18 | 账号入侵检测：同账号多角色金币/时装/邮件转移模式识别。HackType 0x2c6~0x2cb/0x2cd/0x2ce；`sendGold`→DB_SelectCharacMid 复核或 `CHackAnalyzer::addServerHackCnt(0x2ce)` + `CHades::GoldTracking`；`sendMail/sendAvatar` 检测邮件/时装转移 | checkAccountHackingHackType、getMatchingHacktype、isGoldPatten/isAvatarPatten/isDetectionGoldPatten、isSameAccountCharacter、setPatten、sendGold/sendAvatar/sendMail、setLoginTime | CUser、CUserCharacInfo、CInventory、CHackAnalyzer、CHades、DB_SelectCharacMid | 账号安全/入侵检测 | 高 |
| Secu_DataControl | 6 | 安全服务数据控制：`Dispatcher_SecuDataControl`(@0x821f612) 收到客户端控制数据→SetControlData(type 0~3, value)→UpdateSecurityServiceState 写 CUser+0x8e97d secuType 并用 **AES(encryptAES_P)** 加密状态 | SetControlData、UpdateSecurityServiceState | CUser、CRijndael | 安全服务状态 | 高 |
| Secu_HackLogCheck | 7 | 外挂日志检查调度（每用户）：MoveMap→CHackLog_InvalidAreaMove 系路由校验；DieMob→Secu_MonsterCheck(223/224/225)+Secu_DungeonAverageCheck 采集 | MoveMap、DieMob、Init | CHackLog_InvalidAreaMove、Secu_MonsterCheck、Secu_DungeonAverageCheck、MSG_MONSTER_DIE | 服务端行为外挂检测 | 高 |
| Secu_HackLogCheckByParty | 11 | 组队版 hack 日志检查：副本 startDungeon/clear/fail 驱动 `Secu_DungeonAverageCheck::SetPartyPtr`，按队内路径移动计数 CheckMoveMapFitInPathHackCnt | CheckMoveMapFitInPathHackCnt、DieMob、Init、startDungeon/dungeonClear/dungeonFail | CParty、Secu_DungeonAverageCheck、CHackLog_InvalidAreaMove | 组队外挂检测 | 高 |
| Secu_MonsterCheck | 13 | 怪物击杀模式检查：Check223/224/225 三套判定（针对怪物类型 0xc7/0x95 等，跨副本击杀间隔/数量模式），由 Secu_HackLogCheck::DieMob 驱动 | Check223/224/225、init223/224/225、SetMonsterInfo、SetUserPtr | Secu_HackLogCheck、MSG_MONSTER_DIE | 怪物击杀外挂检测 | 高 |
| Secu_DungeonAverageCheck | 12 | 副本击杀/通关均值检查：startDungeon 起记 SecKillMonsterInfo 向量，dungeonClear/Fail 时 CheckHackTypeEndDungeon 按平均击杀数/时间产出 hack 类型 | CheckHackTypeEndDungeon、setKillMonsterInfo、findKillMonsterInfo、SetPartyPtr、startDungeon/dungeonClear/dungeonFail | CParty、SecKillMonsterInfo、CHackAnalyzer | 副本平均检测 | 高 |
| CHackLog_InvalidAreaMove | 15 | 非法区域移动判定（返回 ENUM_HACKTYPE **0x1f5**）：Seria 房间/西海岸↔根特/势力战/公会据点等非法路线；被 `GameWorld::move_area`(@0x86c5a84) 与 `User_Teleport::check_rule`(@0x828415e) 调用 | GetHackType、checkSeriaRoom、IsSeriaRoom、IsMovingBetweenWestCoastAndGent、IsMovingAboutPowerWar、IsMovingInGuildAgit、IsExceptionMove、isMovableRoute | GameWorld、User_Teleport | 移动外挂检测 | 高 |
| CHackLog_InvalidUsingSkill | 4 | 非法技能使用判定（HackType **0x339**），被 DisPatcher_UseSkill(@0x81cadaa) 调用 | IsValidUsingSkill、IsSkillMatchFirst/SecondGrowType、GetHackType | CSkill、SKILL_USING_VALIDATE_INFO | 技能外挂检测 | 高 |
| CHackLog_InvitationPaperSellToNPC | 2 | 邀请函(7 种 itemId 0xc8d~0xcd2，rodata 0x8c101c0)卖 NPC 检测（HackType **0x322**）；本 build 无外部调用（dead） | IsInvitationPaper、GetHackType | — | 经济外挂检测 | 高 |
| CHackLog_OverDamage | 7 | 伤害超限检测：普通副本/死亡之塔/领主塔各自伤害上限与 HackType（0x6b / 0x85），被 DisPatcher_DieMob 调用 | GetDungeonLimitDamageAndHackType、GetDungeonLimitMaxDamage、GetDeathTowerLimitDamage、GetBossTowerLimitDamage、Get*OverDamageHackType | CUser、ENUM_HACKTYPE | 伤害外挂检测 | 高 |
| CTraceMobDieHack | 12 | 怪物死亡伤害追踪（4 槽位 monster/damage/count，+0x50 起 12B/项）：traceBegin/traceEnd 采集、reportHackInfo 按击杀数>1 上报（先查 village_attacked 事件） | traceBegin、traceEnd、_collect、addMonsterDamage、setMobKiller、setDungeonDiff、reportHackInfo、reset | GameWorld、village_attacked::CVillageMonsterMgr、CHackAnalyzer | 怪物死亡外挂检测 | 高 |
| cUserHistoryLog | 143 | 用户行为日志门面（CUser+0x79700）：约 110 个事件方法，全部格式化 CSV（如 `Hades,%d,%d,%d,%d`）后经 `CUser::LogHistory` 写入 TimeLog（前缀 X=Hangame/D=其他，含 accId/频道/端口/IP/职业/等级/角色名等） | Login/Logout、MoneyAdd/MoneySub、ItemAdd/ItemDel、TradeBegin/TradeEnd、KillMonster、MoveArea、EnterDungeon/LeaveDungeon、DungeonClearInfo、HackDetected、HadesHistoryLog、SecuService、AntibotPacketLog、IPCounterLog、GuildCargo*、CharacAdd/Del | CUser、TimeLog_、CUserCharacInfo | 用户行为日志 | 高 |
| Sanicova::CPad | 40 | 安全键盘/密保垫（每用户，CUser::getPad）：随机键序(0~4999)与抖动数据、选择密码学算法序号(GetSelectedCipherIdx 与 `s_secu_cipher_keystring_manager_` 5000 个 Cipher 对应)、密码/变更密码、认证/超时/失败计数、改密奖励 | GenerateRandomData/KeyIdx/ShakeData、GetSelectedCipherIdx、GetKeyIdx、GetShakeData、checkAnswer、isCertified、get/setFailCnt、setRequestState、SendChagePwdReward/Mail、isTimeAttackSeccess | Cipher、get_rand_int、CUser、Inter_GoblinPadChagePwdReward、Inter_LoadEtc | 安全键盘/密保（Sanicova） | 高 |
| Cipher | 13 | 14 种分组算法容器：ctor 内 `CreateCryptoGraph` 建 14 个 `ICryptoGraph`（Anubis…XTea），按索引 Encrypt/Decrypt/AdjustDataSize；用于 a) 通用包加密 `PacketBuf::encrypt_packet`/`CUser::Parsing`（G_Cipher 单例） b) 密保通道解密（`GlobalData::s_secu_cipher_keystring_manager_` 5000 例，InitCipherKeyString 用 SelectKeyString 逐个灌钥） | Initialize、Encrypt、Decrypt、AdjustDataSize、GetOriginalKey、GetTotalKeyLength | CNCrypto*（14）、ICryptoGraph、GlobalInstance<Cipher> | 网络/安全加密 | 高 |
| Encryption | 11 | 轻量包加密：CRC32(crc32/crc32N/make_crc_table) + 种子 XOR+按位旋转流（SeedRand/ShiftSeed/XorSeed）；`PacketBuf::finalize/encFinalize` 与 `PacketDispatcher::doDispatch` 做校验，`PacketBuf::encrypt_packet` 分支用它 | Encrypt、Decrypt、DecryptBody、getOriginalBuf、SeedRand、crc32/crc32N、make_crc_table | PacketBuf、CRijndael（EncryptTool::createEncKey 区域） | 网络包加密/校验 | 高 |
| SimpleEncryption | 12 | 单例式“简单加密”（encryptUINT/decryptUINT+initialize）；**运行时零外部调用**（内部自调用），判定为残留/死代码 | initialize、instance、encryptUINT、decryptUINT、uninitialize | CNChecksum（同 TU） | 加密（死代码） | 高 |
| CNCrypto{Anubis,BlowFish,Cast5,Kasumi,Khazad,Multi2,Noekeon,Rc6,Rijndael,Shift,Skipjack,Tea,TwoFish,XTea}（14 类） | 各 16 | 统一接口分组密码封装（Initialize/SetMode/Encrypt/Decrypt/GetBlockSize/GetKeySize，ECB/CBC+填充），由 `CreateCryptoGraph(CRYPTO_GRAPH_TYPE)`(@0x809df90) 工厂构造进 Cipher；算法正确性有自测（0x8099b~0x809e2 区域，含 CBlowFish/CTEA 向量） | Initialize、SetMode、Encrypt、Decrypt、GetBlockSize、GetKeySize | ICryptoGraph、CBlowFish/CTEA/CRijndael 底层 | 加密算法库 | 高 |
| CRijndael | 33 | 完整 AES/Rijndael（S/Si、T1-T8、U1-U4、rcon、shifts、alog/log、CBC chain0+Signature）；`encryptAES_P` 辅助被 Secu_DataControl、DB_MouseRegister、GlobalData::Init、EncryptTool、CSecurityCardCenter、CSimpleSSO、CPad::checkAnswer 使用 | Initialize、EncryptBlock/DecryptBlock、Encrypt/Decrypt、ResetChain、Signature | — | AES 底层 | 高 |
| CRijndael_fake | 10 | “假 AES”桩（固定尺寸/占位 Pad），仅自引用无外部调用 → 测试桩/死代码 | Pad、GetBlockSize、Encrypt、Decrypt、Initialize | — | 加密（测试桩） | 高 |
| CTEA | 13 | TEA 分组密码（CBC chain+Signature+ResetChain），被 CNCryptoTea 封装 | Initialize、EncryptBlock/DecryptBlock、Encrypt/Decrypt、ResetChain | CNCryptoTea | TEA 底层 | 高 |
| CBlowFish | 11 | Blowfish 底层（F、scm_auiInitP/S、SBlock），被 CNCryptoBlowFish 封装 | F、Encrypt/Decrypt(ER6SBlock / EPKhPhji) | CNCryptoBlowFish | Blowfish 底层 | 高 |
| CSHA | 16 | SHA-256 底层（sm_H256/sm_K256、SIG0/SIG1、MAJ、CH、Bytes2Word/Word2Bytes）；被 CodeHackChecksumData（代码区 32B 校验=SHA-256）、CRijndael::Signature、Dispatcher_SecurityCardIssue 使用 | AddData、Update、Final、Transform、Reset | CodeHackChecksumData、CRijndael、Dispatcher_SecurityCardIssue | SHA-256 | 高 |
| CSHA1 | 10 | SHA-1（Final/GetHash/GetHexHash/Transform/Update），用于 SecurityCardIssue 等 | Final、Update、Transform、GetHash、GetHexHash | Dispatcher_SecurityCardIssue | SHA-1 | 高 |
| CNChecksumMd5/Sha256/Sha384/Sha512（4 类） | 各 15 | 流式校验封装（ChecksumStart/Update/Finish、MakeChecksumFromFile/FromMemory、GetChecksumSize），由 `CreateCryptoChecksum`(@0x809e309) 工厂创建；运行时唯一消费者是 `getSha256UsingSalt`（DisPatcher_SetIP 用，IP 加盐 SHA-256） | Initialize、ChecksumStart/Update/Finish、MakeChecksumFromFile/Memory、GetChecksumSize | IChecksum、getSha256UsingSalt | 校验算法库 | 高 |
| XorRand4 / XorRand8 | 20 / 24 | xorshift PRNG（4/8 字状态，ms_table0~3/0~7、静态实例 getStatic*、seed/max/min）；XorRand4 实际被 CaptchaGen 使用；XorRand8 无外部调用 | getInt32/getUInt32、getStaticInt32/UInt32、seed、operator() | CaptchaGen、RandGen | 随机数 | 高 |
| CodeHackChecksum | 2 | 32 字节代码区校验值载荷结构（仅 dtor 符号） | — | CodeHackChecksumData/Ex | 客户端代码校验 | 高 |
| CodeHackChecksumEx | 12 | 单文件代码校验项（文件名+区间+期望校验值），`CUser::checkCodeChecksumRange` 收客户端区间注册后 PushData 入队并回包 0x6f 索要校验值 | SetFileName、SetCodeHackCheckRange、setData、GetFileName、IsRightChecksum | CUser、CodeHackCheckStorage | 客户端代码校验 | 高 |
| CodeHackChecksumData | 12 | 代码校验数据集合（vector<CodeHackChecksum>，AddCodeHackChecksum 用 **CSHA=SHA-256** 计算 32B 值） | AddCodeHackChecksum、IsRightChecksum、Clear、Reserve | CSHA | 客户端代码校验 | 高 |
| CodeHackCheckStorage | 12 | 每用户校验队列（CUser+0x795fc，std::queue<CodeHackChecksumEx>）：PushData/IsRightChecksum/PopData；客户端二次上报 32B 哈希与注册值不符 → addServerHackCnt(0x3c8) | PushData、IsRightChecksum、PopData×2、IsEmpty、IsFull、reset | CUser、Dispatcher_CodeCheckSum | 客户端代码校验 | 高 |
| WindowsCodeProtectorServer | 14 | 客户端 Windows EXE/数据文件完整性模块：装载官方客户端文件、生成校验区间（委托 WindowsExeFileFamily/DataFileFamily）；**本 build 无外部实例化/调用 → 已编译未接线（供配套工具链使用或死代码）** | Initialize、BeginLoading、CompleteLoading、LoadWindowsFile、GenerateChecksum、FindExe/DataFamilyFile、SetExeCheckingOption、IsDifferentExeVersionRoughly | WindowsExeFileFamily、WindowsDataFileFamily | 客户端文件完整性 | 高 |
| WindowsExeFile / WindowsExeFileFamily | 9 / 10 | PE 头解析+常量节+区间生成+校验（ReadPeHeader/MakeCommonWindowsExeConstantSections/GenerateRange/GenerateChecksum/IsDifferentFileData） | 见左 | CodeHackChecksumEx、IntervalSet | 客户端文件完整性 | 高 |
| WindowsDataFile / WindowsDataFileFamily | 6 / 10 | 客户端数据文件加载+区间+校验（GenerateChecksum/GenerateRange/IsScanningAddressReset） | 见左 | CodeHackChecksumEx | 客户端文件完整性 | 高 |
| CaptchaGen | 13 | 服务端验证码图片生成：三种字符集（韩文/日文平假名/台服字母表，rodata 常量表）+字体+文字渲染；`GlobalData::InitCaptcha/GenerateCaptchaData` + `Timer_GenerateCaptchaData`（60s 周期预生成）；发送路径未在二进制内发现（交付介质待定） | addFont、generateText、generateImage、k*字符集常量 | GreyImage、XorRand4、GlobalData、Timer_GenerateCaptchaData | 验证码 | 高 |
| CaptchaGen::ImageOption | 2 | 验证码图像选项结构（模糊/噪点等参数容器） | — | CaptchaGen | 验证码 | 高 |
| CPacketVerifier | 11 | 每用户包序号/varid 校验（CUser 内嵌）：InitOnAccept 初始化、Parsing 时 UpdatePacket+GetSequence，含普通与拍卖两套 varid 计数 → 反重放/反注入 | Init、UpdatePacket、GetSequence、m_nVaridCount/m_nAuctionVaridCount 等 | CUser | 包安全 | 高 |
| CSecu_ProtectionField | 19 | 安全保护字段（账户安全保护/受限物品交易保护）：Check 按保护类型查恢复/交易/杂项类型与反方（GetOppositeErr/GetCashShopErr）；被 AvartarRoulette、AradEmblemCompound、BuyItem、BuySkill 等 checkWorkState/check_error 调用 | Check、CheckRestoreType、CheckTradingType、CheckEtcType、CheckItemRarity、GetProtectionType、GetItemPtr、GetCashShopErr、GetOppositeErr | CUser、SECURITY_PROTCTION、ExceptionProtectionType | 交易/现金保护 | 高 |
| ServiceRestrictManager | 20 | 服务限制策略管理器（ARAD::Singleton，map<RestrictCategory::Enum, InterfaceServicePolicy*>）：loadPolicy 经 `Taiwan::SigLoadRestrictPolicy` 内部流加载；isRestricted 被 AradEmblemCompound/BuyItem/BuySkill 等调用；类别串表（rodata 0x8b818e0 起）：AuthMobilePolicy/CreateCharacterPolicy/SecurityPolicy + RestrictBegin、UseTrade、UseMail、UseAuction、UseCeraShop、UseEmblemCompound、DeleteCharacter 等 | loadPolicy、savePolicy、updatePolicy、beginPolicy/endPolicy、isRestricted×2、isApply、serviceRestrictStringQuery、printPolicy | RestrictCategory、InterfaceServicePolicy、Taiwan internal、ARAD::Singleton | 服务限制策略 | 高 |
| SecurityRestrictPolicy | 13 | 安全类服务限制策略实现（InterfaceServicePolicy 派生，beginPolicy/isApply/getRestrictValue/printRestrict 模板化方法集） | beginPolicy、endPolicy、isApply、getRestrictValue、printRestrict | InterfaceServicePolicy、RestrictCategory | 服务限制策略 | 高 |
| CreateCharacterRestrictPolicy | 13 | 建角限制策略实现（同上方法集） | 同上 | InterfaceServicePolicy | 服务限制策略 | 高 |
| AuthMobileRestrictPolicy | 13 | 手机/短信认证限制策略实现（同上方法集） | 同上 | InterfaceServicePolicy | 服务限制策略 | 高 |
| RestrictGeolocation | 15 | 地理限制（台服）：按 IP 查国家码（Taiwan 内部流）+允许国家列表，isAllow 判定；被 InterLoadServiceRestrictPolicy 驱动 | initGeolocation、loadData、getCountryCode、addAllowCountry、clearAllowCountry、isAllow×2、isAllowCountryCode、closeGeolocation | ARAD::Singleton、Taiwan::internal_stream | 地区/防滥用限制 | 高 |
| CGM_Manager | 13 | GM 账号管理：DB 表 **gm_manifest(m_id, level)** 全量/单账号加载，IsGm/GetGmLevel/SetGmLevel/TurnGmMode/GetCurrentGmMode | LoadGmListFromDb、LoadGmDataFromDb、IsGm、GetGmLevel、SetGmLevel、TurnGmMode、GetCurrentGmMode | MySQL、writeGuard<rwLock>、CUser | GM 管理 | 高 |
| game_master::CGameMasterMgr | 6 | 新 GM 命令框架入口：int/string 双 CCommandMap，HandleRequest→虚分发 | GetCommand(int/string)、GetDispatcher、HandleRequest | CCommandMap、CCommand、IGameMaster | GM 命令框架 | 高 |
| game_master::CCommandMap | 8 | 命令注册表（int+string 两个 map） | add(int/string)、get(int/string) | CCommand | GM 命令框架 | 高 |
| game_master::CCommand | 8 | GM 命令基类：SetParser→executeTemplate→parse+execute；HasJunior/SeniorPermission | GetUser、SetParser、executeTemplate、parse、HasJuniorPermission、HasSeniorPermission | CParser、CUser | GM 命令框架 | 高 |
| game_master::IGameMaster / CJuniorGameMaster / CSeniorGameMaster | 3/3/3 | 权限分发链：HandleRequest 先查 Junior/Senior 权限，通过则 executeTemplate，否则上抛父级 | HandleRequest | CCommand | GM 命令框架 | 高 |
| game_master::CParser | 5 | GM 命令字符串解析（token 化） | parse | CUserCharacInfo::getSeparatedTextUnits | GM 命令框架 | 高 |
| game_master::CMacro / stMacroData | 10/4 | GM 宏录制/回放（OnRecv/OnSend/Recording/Start/Stop/RudMacro/SendPacket，数据 stMacroData） | 见左 | CCommandMap | GM 宏 | 高 |
| game_master（命名空间层） | 11 | 命名空间数据符号（CCommand*&、stMacroData 引用等） | — | — | GM | 高 |
| CLocalChinaErrorDispatcher（跨组，非本组清单） | — | 中国区逐包错误分发器（localchina_security.cpp）：ctor 建 map<ENUM_CMDPACKET,_PacketErrorCheck>，PacketDispatcher::doDispatch(@0x8594c14) 每包先过它；含 ProcAntiAddiction(防沉迷)、ProcSafeModeUser、ProcSaefModeAfterLogin、ProcLockInSeriaRoom | doErrorDispatcher、ProcAntiAddiction、ProcSafeModeUser、ProcSaefModeAfterLogin、ProcLockInSeriaRoom | PacketDispatcher、ENUM_CMDPACKET | 中国区安全/合规 | 高 |
| CClientCrashDownLogStatistic | 19 | 客户端崩溃统计：Register/Carry/Update/Query + MakeClientCrashDownQuery；DB_CrashDownReport/DB_UpdateClientCrashDownLog 消费 | Init、RegisterClientCrashDown、CarryClientCrashDown、UpdateClientCrashDown、MakeClientCrashDownQuery | stClientCrashDownLog_t、DB_CrashDownReport | 崩溃统计 | 高 |
| CClientCrashDownLogStatistic::stClientCrashDownLog_t | 7 | 崩溃日志行结构 | — | CClientCrashDownLogStatistic | 崩溃统计 | 高 |
| StatisticsToObserveCrash | 16 | 每用户“最后崩溃”观察：最后崩溃包 ID/副本 ID/游戏状态、异常掉线计数；`CUser::DisConnSig`(@0x8649201 区域) 与 DB_CrashDownReport::dispatch 更新，GameWorld 持有 | get/inc*（AbnormalDownUserCount、UserLastCrashDungeonID/PacketID/PlayStatus）、lock/unlock、reset | CUser、GameWorld、DB_CrashDownReport | 崩溃观察 | 高 |
| break_away_prevent::CBreakAwayPreventSystem | 14 | 防流失/回流奖励系统（GlobalData 成员，ctor @0x829c68a）：按连续断登天数/UV 列表算回流积分，副本通关奖励、Cera 消费跟踪、GM 改 UV | startBreakAwayPreventSystem、loadDbData、calBreakAwayUserPoint、getDiffConnectDay、selectReward、giveBreakAwayDungeonClearReward、updateUvList、updateUsedCera、GM_UpdateUvList | SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER、SIG_LOGIN_DATA、CUser、Dispatcher_Break_Away_Quest_Check、CLocalChina_DB_BreakAwayReset/LastDay | 防流失运营 | 高 |
| disconnect_detecter | 3 | 断线检测命名空间（单例 GetInstanceDisconnectDetecter @0x82348df） | GetInstanceDisconnectDetecter | CDisconnectDetecter | PvP 断线检测 | 高 |
| disconnect_detecter::CDisconnectDetecter | 12 | 异常断线检测器：RegisterUser/UnregisterUser（PvP_Room::start_pvp、pvp_assault::CAssaultPlace::_DelUser 等），RefreshRecvTime（Dispatcher_CodeCheckSum 每包刷新），TimerDetectDisconnect(60s) 周期 DoDetectingDisconnect，超时→OnDisconnect 判定 | DoDetectingDisconnect、RegisterUser、UnregisterUser、RefreshRecvTime、_IsTimeout、_GetUser、OnDisconnect | TimerDetectDisconnect、DetectedObjectKey、CUser | PvP 断线检测 | 高 |
| disconnect_detecter::DetectedObjectKey | 3 | 检测对象键（uid+类型，operator< 供 map） | operator< | CDisconnectDetecter | PvP 断线检测 | 高 |
| CAdvanceAltarLog | 13 | 推进祭坛（advancealtar）副本统计日志：按层/入口累加、makeKey、updateDatabase；被 `advancealtar::HistoryLog::enterDungeon`(@0x81339b0) 调用 | incrementEntranceData、incrementLayerStatData、initStatistics、makeKey、updateDatabase、getIndex/Level/Type | advancealtar::HistoryLog | 副本统计 | 高 |
| __slang_filter__FlexLexer | 29 | flex 生成的扫描器（yylex/yyinput/yy_create_buffer 等），供 CSyncSlangFilter 聊天敏感词过滤（HasSlang/HasSlangName/Filter，被聊天分发 0x81c4765 等调用） | yylex、yy_create_buffer、yy_switch_to_buffer、yyrestart、yyinput 等 | CSyncSlangFilter | 聊天过滤 | 高 |

---

## 2. 反外挂体系协作（XNuclear/Hades ↔ Secu_* ↔ CHackLog_*/CTraceMobDieHack ↔ CHackAnalyzer ↔ 行为日志）

### 2.1 总链路

```
客户端动作/包 ──> DisPatcher_* / Inter_*
   ├─ DisPatcher_MoveMap::process(@0x81c5330) ─> Secu_HackLogCheck::MoveMap ─> CHackLog_InvalidAreaMove（HackType 0x1f5）
   ├─ User_Teleport::check_rule(@0x828415e) ─> CHackLog_InvalidAreaMove::checkSeriaRoom/IsSeriaRoom/IsMovingBetweenWestCoastAndGent…
   ├─ GameWorld::move_area(@0x86c5a84) ─> CHackLog_InvalidAreaMove::GetHackType
   ├─ DisPatcher_UseSkill::process(@0x81cadaa) ─> CHackLog_InvalidUsingSkill（0x339）
   ├─ DisPatcher_DieMob::dispatch_sig(@0x81eb0c4)
   │     └─ Secu_HackLogCheck::DieMob ─> Secu_MonsterCheck::SetMonsterInfo+Check223/224/225
   │                                    ─> CHackLog_OverDamage::GetDungeonLimitDamageAndHackType（0x6b/0x85）
   │                                    ─> Secu_DungeonAverageCheck::setKillMonsterInfo（通关时 CheckHackTypeEndDungeon）
   ├─ CTraceMobDieHack（GameWorld 内，traceBegin/…/traceEnd）─> reportHackInfo ─> CHackAnalyzer::analyzeMonsterDieHack 等
   ├─ Dispatcher_CodeCheckSum::dispatch_sig(@0x82044b0) ─> CUser::checkCodeChecksum ─> 不匹配: CHackAnalyzer::addServerHackCnt(0x3c8)
   └─ Dispatcher_SecuDataControl(@0x821f612) ─> Secu_DataControl::SetControlData ─> UpdateSecurityServiceState（AES）
              │
              ▼ （每个命中都累加到）
   WongWork::CHackAnalyzer（G8 核心，每用户）
     analyzeHackReport ─ _analyzeSpeedHack / _analyzeDifficultyHack / _analyzeMemoryHack / _analyzeMonsterDieHack / _analyzeEquipmentUpgradeHack
     addServerHackCnt(ENUM_HACKTYPE) / onUpdateHackCount（`!isHackUserTimer()` 时）
              │
              ├─> CUser::onUpdateHackCount(@0x867fdcc) ─> XNuclear::CHades::AddHackTypeCnt（包 0xfd7，Hades）
              ├─> ReqDBSaveHackInfo / ReqDBSaveHackUserPunish（member_punish_info*，reason='HADES'）
              └─> CUser::setHackUserFlag / DisConnSig(0x39) 强断
```

### 2.2 Hades 上报（结论与 hades_protocol.md 一致，含本组补充的调用点）

- 金币：`Secu_GoldControl::AddMoney/SubMoney → CHades::GoldPlus/GoldMinus(reason 0)`；`AddImportMoney/SubImportMoney → reason 1`；`AddAuctionMoney/SubAuctionMoney → reason 2`（拍卖 >0x1387 时另发 `GoldTracking(4,…)`）。地址证据：AddMoney @0x828772a 内 `call CHades::GoldPlus` @0x82877ae。
- 账号金币异常：`Secu_AccountHacking::sendGold`（@0x8278cce）→ `CHackAnalyzer::addServerHackCnt(0x2ce,1,gold,cnt)` + `CHades::GoldTracking(type,count,IP,gold,fatigue)`（@0x8278dd7）；非本账号角色经 `DB_SelectCharacMid::makeRequest(UID,0,0x2ce,name,gold,0)` 复核。HackType 枚举 0x2c6–0x2cb（AccountHackingType 0–5）、0x2cd、0x2ce。
- 外挂计数：客户端上报/服务端判定 → `CHackAnalyzer::addServerHackCnt` → `CUser::onUpdateHackCount`（`!isHackUserTimer()`）→ `CHades::AddHackTypeCnt(hackType,count,…)`（包 0xfd7）。
- 密保/安全卡：`Dispatcher_SecurityCardAuthRpy::process`(@0x82627ca) 与 `Dispatcher_MouseRegister::dispatch_sig`(@0x82637fe)：Cipher::Decrypt(GetSelectedCipherIdx) → CPad::GetShakeData 去抖 → checkAnswer/checkValiedPassword；失败 ≥3 次 → `CHades::ChangeSecurity(1,0x17/0x21)` + `addServerHackCnt(0x343/0x342)`，失败 1–2 次 → ChangeSecurity(1,0x15/0x16/0x1f/0x20)；注册成功 → ChangeSecurity(1,0x24/0x25/0x26)。每步同时写 `cUserHistoryLog::SecuService` 与 DB（SIG_MOUSE_REGISTER，流 0xa3）。
- 断线/崩溃：`CUser::DisConnSig`(@0x86489f4 区域) 更新 `StatisticsToObserveCrash`（最后崩溃包/副本/状态 + 异常掉线计数）；`DB_CrashDownReport/DB_UpdateClientCrashDownLog` 落库；`disconnect_detecter::CDisconnectDetecter`（PvP 房间/突袭场注册，TimerDetectDisconnect 60s 周期）负责对局内异常断线判定，`Dispatcher_CodeCheckSum` 每包刷新接收时间。

### 2.3 客户端代码完整性（CodeHack）

```
客户端 ── Inter_CodeChecksumRange::dispatch_sig(@0x84d0648)（文件/区间注册，CodeHackChecksumEx::setData）
   └─ CUser::checkCodeChecksumRange(@0x867ea5c，带冷却 GetResumeChecksumTime)
        ├─ CodeHackCheckStorage::PushData（CUser+0x795fc 队列）
        └─ 回包 0x6f（文件名+区间）索要校验值
客户端 ── Dispatcher_CodeCheckSum(@0x82044b0)：32B 哈希（SHA-256，CodeHackChecksumData/CSHA）
   └─ CUser::checkCodeChecksum(@0x867ebba)
        ├─ 命中队首 → PopData() 通过
        └─ 不匹配 → PopData(文件名)，addServerHackCnt(0x3c8)（.exe.bak 变体也计）
```
`WindowsCodeProtectorServer/WindowsExeFile(Family)/WindowsDataFile(Family)` 为“官方客户端文件校验值”生成簇（PE 解析+区间），但本 build 无任何外部实例化/调用，属**已编译未接线**（官方校验值未在运行时注入队列，CodeHack 通道实际为“客户端自注册→服务端一致性复核”模式）。

### 2.4 用户行为日志

`cUserHistoryLog`（CUser+0x79700）为全事件 CSV 日志门面：登录/登出/金币/物品/交易/邮件/拍卖/公会/技能/PvP/副本/疲劳/点券等 ~110 事件；Hades 相关：`HadesHistoryLog`（action,p1,p2,p3）；安全相关：`SecuService`（密保/键盘事件 0/1/2/3/4）、`HackDetected`、`AntibotPacketLog`、`AbnormalUser`、`IPCounterLog/FullIPCounterLog`（同 IP 多账号计数）。统一出口 `CUser::LogHistory`(@0x867c8fe)：拼 accId/频道/端口/IP/webAddress/成长类型/职业/等级/角色名 CSV 前缀，TimeLog 写盘（X=Hangame/D=其他）。

---

## 3. 加密 / 校验体系

### 3.1 分层结构

| 层 | 类 | 用途 | 调用点（地址证据） |
|---|---|---|---|
| 算法实现层 | CRijndael、CTEA、CBlowFish、CSHA(SHA-256)、CSHA1(SHA-1) | 裸算法 + CBC chain + Signature | 自测区 0x809b5~0x809e2；encryptAES_P 被 6 处使用（见下） |
| 统一封装层 | CNCrypto*（14 类）+ CNChecksum*（4 类） | `CreateCryptoGraph`/`CreateCryptoChecksum` 工厂产物（ICryptoGraph/IChecksum 接口） | Cipher ctor、getSha256UsingSalt |
| 容器/选择层 | Cipher | 14 算法按索引选择；`GlobalInstance<Cipher>`(G_Cipher) 供包加密；5000 例预灌钥数组供密保通道 | PacketBuf::encrypt_packet @0x858d986；CUser::Parsing @0x8647c25；SecurityCardAuthRpy @0x82628d1/0x8262977；MouseRegister @0x8263dec/0x8263e56；sendBackSecurityAuthRequest @0x8680834；InitOnAccept GetOriginalKey @0x8649562 |
| 轻量包加密 | Encryption | CRC32 校验 + 种子 XOR 旋转流 | PacketBuf::finalize @0x858d591/0x858d6e6、encFinalize @0x858df4f/0x858e072、encrypt_packet 分支 @0x858da12；PacketDispatcher::doDispatch @0x8594a7a；CUser::Parsing @0x8647c75 |
| 包序号 | CPacketVerifier | 每用户 varid/序号防重放（普通+拍卖两套） | CUser::Parsing @0x8647ae5/0x8647b2b；InitOnAccept @0x8649418 |
| 单点工具 | SimpleEncryption、XorRand4/8、CaptchaGen | 简单加密单例（死代码）；xorshift PRNG（CaptchaGen 用）；验证码图片生成 | SimpleEncryption 仅内部自调；CaptchaGen 由 InitCaptcha/GenerateCaptchaData 驱动 |

### 3.2 关键调用点清单

- 包加密（服务端→客户端）：`PacketBuf::encrypt_packet`(@0x858d86a)：头部 flag 分支选 **Cipher::Encrypt(索引=包头 u16)**（AdjustDataSize 对齐 16）或 **Encryption::Encrypt**（XOR+旋转）；`isEncryptRequired` 读 +0x17330 标志。
- 包解密（客户端→服务端）：`CUser::Parsing`(@0x8647890)：Cipher::Decrypt + Encryption::crc32N 校验 + CPacketVerifier::UpdatePacket/GetSequence + StatisticsToObserveCrash 记录最后崩溃包。
- 密保通道：客户端用 `CPad::GetSelectedCipherIdx`（0~4999，`get_rand_int(0x1388)`）选索引 → 服务端 `s_secu_cipher_keystring_manager_[idx]`（BSS 0x940be80，`InitCipherKeyString` @0x82a025a 建 5000 个 Cipher 并 SelectKeyString 灌钥）解密；`GetTotalKeyLength` 缓存 0x941f864。
- AES 独立用途：`Secu_DataControl::UpdateSecurityServiceState`(@0x8286e40)、`DB_MouseRegister::dispatch`(@0x8422964)、`EncryptTool::createEncKey`(@0x848d5b0)、`CSecurityCardCenter::init`(@0x85fe05e)、`CSimpleSSO::init(MySQL*)`(@0x86027fc)、`CPad::checkAnswer`(@0x8599712)。
- 哈希：代码区 32B 校验值 = SHA-256（CodeHackChecksumData+CSHA，0x808a2xx）；IP 加盐 SHA-256 = `getSha256UsingSalt`（`DisPatcher_SetIP::dispatch_sig` @0x81f4985，CNChecksumSha256 经 CreateCryptoChecksum）；安全卡签发用 CSHA1+CSHA（Dispatcher_SecurityCardIssue @0x8209c8c）。
- 验证码：`GlobalData::InitCaptcha`(@0x829d438) 装载字体并首轮生成；`Timer_GenerateCaptchaData`（注册 @0x829d064）每 60s dispatch_sig→GenerateCaptchaData(@0x829d4b0) 预生成（XorRand4 随机源）；字符集按 CountryCode 选韩文/日文/台服表。**验证码的客户端交付/校验包未在二进制内发现（待定）。**

---

## 4. GM / 管理

### 4.1 双通道

1. 旧通道：`Dispatcher_GM_Command::dispatch_sig`(@0x81fa19e，包 0x6e + 命令字节 0~n)：GM 模式开关（CGM_Manager::TurnGmMode）、GMC/GMZ/GMS 群发、踢人、禁言等，权限检查 `CGM_Manager::GetGmLevel>0 && GetCurrentGmMode==1`，GM 名单 DB 表 `gm_manifest(m_id, level)`（LoadGmListFromDb @0x8299530 / LoadGmDataFromDb @0x8299740）。
2. 新框架：`Dispatcher_New_Gmdebug_Command::dispatch_sig`(@0x820bbde) → 校验 `WongWork::CGMAccounts::isGM(accId)` → token 化（getSeparatedTextUnits）→ `game_master::CParser::parse` → `CGameMasterMgr::GetCommand(int/string)`（CCommandMap 双表 @+8）→ `CCommand::SetParser` → `HandleRequest` → `CJuniorGameMaster::HandleRequest`(@0x84a8c06) 查 HasJuniorPermission（vtable+8）→ `CCommand::executeTemplate`(@0x84b3f90)；不满足上抛 `CSeniorGameMaster`（+0xc）→ `IGameMaster`。约 90 个 CCommand 子类（见长尾表）。

### 4.2 CGM_Manager

- 单例 `GlobalData::s_GM_Manager`；`IsGm(accId)`/`GetGmLevel`/`SetGmLevel`/`TurnGmMode`/`GetCurrentGmMode`；写锁 `writeGuard<rwLock>` 保护名单（LoadGmListFromDb 内使用）。

### 4.3 中国区补充（跨组）

- `CLocalChinaErrorDispatcher`：PacketDispatcher ctor(@0x8590a2e) 构造，`PacketDispatcher::doDispatch`(@0x8594c14) 每包先过 `doErrorDispatcher`；分支处理 **防沉迷（ProcAntiAddiction）**、**安全模式（ProcSafeModeUser/ProcSaefModeAfterLogin）**、**Seria 房间锁定（ProcLockInSeriaRoom）**，按 ENUM_CMDPACKET→_PacketErrorCheck(4 bool) 表匹配。
- `break_away_prevent::CBreakAwayPreventSystem`（GlobalData 成员，@0x829c68a 构造）：回流防流失（UV 列表/断登天数→奖励），GM 子命令 `GM_UpdateUvList` 在 `Dispatcher_New_Gmdebug_Command::oldGmRoutine`(@0x820bf2c) 中，DB 层 `CLocalChina_DB_BreakAwayReset / CLocalChina_DB_LastDay_BreakAway`。

---

## 5. 长尾类逐类说明（<20 符号，共 176 类）

> 下表为全部 <20 符号类的速查索引；其中已在第 1 节深挖的类（CNCrypto*、Secu_*、CHackLog_*、Cipher、CaptchaGen、CodeHack*、Windows*、game_master 框架类、GM 命令类、cUserHistoryLog 相关等）此处仅保留一句话摘要。

| 类名 | 符号数 | 一句话作用 | 置信度 |
|---|---|---|---|
| AuthMobileRestrictPolicy | 13 | 手机认证服务限制策略实现 | 高 |
| CAdvanceAltarLog | 13 | 推进祭坛副本入口/层统计落库 | 高 |
| CBlowFish | 11 | Blowfish 底层实现（被 CNCryptoBlowFish 封装） | 高 |
| CClientCrashDownLogStatistic | 19 | 客户端崩溃日志统计（注册/搬运/查询/落库） | 高 |
| CClientCrashDownLogStatistic::stClientCrashDownLog_t | 7 | 崩溃日志行数据结构 | 高 |
| CGM_Manager | 13 | GM 名单/等级/模式管理（gm_manifest 表） | 高 |
| CHackLog_InvalidAreaMove | 15 | 非法区域移动判定（HackType 0x1f5） | 高 |
| CHackLog_InvalidUsingSkill | 4 | 非法技能使用判定（0x339） | 高 |
| CHackLog_InvitationPaperSellToNPC | 2 | 邀请函卖 NPC 检测（0x322，dead） | 高 |
| CHackLog_OverDamage | 7 | 副本/双塔伤害超限检测（0x6b/0x85） | 高 |
| CHadesServerProxy | 14 | Hades TCP/UDP 连接代理 | 高 |
| CNChecksumMd5 | 15 | MD5 校验封装（CreateCryptoChecksum 工厂） | 高 |
| CNChecksumSha256 | 15 | SHA-256 校验封装（getSha256UsingSalt 实际消费） | 高 |
| CNChecksumSha384 | 15 | SHA-384 校验封装 | 高 |
| CNChecksumSha512 | 15 | SHA-512 校验封装 | 高 |
| CNCryptoAnubis | 16 | Anubis 分组密码封装（Cipher 14 算法之一） | 高 |
| CNCryptoBlowFish | 16 | BlowFish 封装 | 高 |
| CNCryptoCast5 | 16 | CAST5 封装 | 高 |
| CNCryptoKasumi | 16 | KASUMI 封装 | 高 |
| CNCryptoKhazad | 16 | Khazad 封装 | 高 |
| CNCryptoMulti2 | 16 | MULTI2 封装 | 高 |
| CNCryptoNoekeon | 16 | NOEKEON 封装 | 高 |
| CNCryptoRc6 | 16 | RC6 封装 | 高 |
| CNCryptoRijndael | 16 | AES/Rijndael 封装 | 高 |
| CNCryptoShift | 16 | SHIFT 封装 | 高 |
| CNCryptoSkipjack | 16 | Skipjack 封装 | 高 |
| CNCryptoTea | 16 | TEA 封装（底层 CTEA） | 高 |
| CNCryptoTwoFish | 16 | Twofish 封装 | 高 |
| CNCryptoXTea | 16 | XTEA 封装 | 高 |
| CPacketVerifier | 11 | 每用户包序号/varid 防重放 | 高 |
| CRijndael_fake | 10 | “假 AES”测试桩（无外部调用） | 高 |
| CSecu_ProtectionField | 19 | 安全保护字段（交易/现金/恢复/杂项类型检查） | 高 |
| CSHA | 16 | SHA-256 底层（代码校验/签名/安全卡） | 高 |
| CSHA1 | 10 | SHA-1 底层（安全卡签发） | 高 |
| CTEA | 13 | TEA 底层（CBC） | 高 |
| CTraceMobDieHack | 12 | 怪物伤害追踪（4 槽）→ 死亡外挂上报 | 高 |
| CaptchaGen | 13 | 服务端验证码图片生成（韩/日/台字符集） | 高 |
| CaptchaGen::ImageOption | 2 | 验证码渲染选项结构 | 高 |
| Cipher | 13 | 14 算法容器/索引选择器（包加密+密保通道） | 高 |
| CodeHackCheckStorage | 12 | 每用户代码校验队列（CUser+0x795fc） | 高 |
| CodeHackChecksum | 2 | 32B 代码校验值结构 | 高 |
| CodeHackChecksumData | 12 | 代码校验集合（SHA-256 计算） | 高 |
| CodeHackChecksumEx | 12 | 文件+区间校验项（客户端注册） | 高 |
| CreateCharacterRestrictPolicy | 13 | 建角限制策略实现 | 高 |
| Encryption | 11 | CRC32+种子 XOR 旋转流（包校验/加密） | 高 |
| RestrictGeolocation | 15 | IP 国家码限制（台服内部流） | 高 |
| Secu_AccountHacking | 18 | 账号入侵检测（金币/时装/邮件转移模式） | 高 |
| Secu_DataControl | 6 | 安全服务状态控制（AES 加密状态） | 高 |
| Secu_DungeonAverageCheck | 12 | 副本击杀/通关均值检查 | 高 |
| Secu_HackLogCheck | 7 | 死亡/移图外挂检查调度 | 高 |
| Secu_HackLogCheckByParty | 11 | 组队版检查（队内路径/副本统计） | 高 |
| Secu_MonsterCheck | 13 | 怪物击杀模式检查 223/224/225 | 高 |
| SecurityRestrictPolicy | 13 | 安全类服务限制策略实现 | 高 |
| SimpleEncryption | 12 | 简单加密单例（运行时无调用，死代码） | 高 |
| StatisticsToObserveCrash | 16 | 每用户最后崩溃信息观察 | 高 |
| WindowsCodeProtectorServer | 14 | 客户端 EXE/数据文件完整性（未接线） | 高 |
| WindowsDataFile | 6 | 数据文件加载+校验 | 高 |
| WindowsDataFileFamily | 10 | 数据文件族（区间/校验/扫描重置） | 高 |
| WindowsExeFile | 9 | PE 头解析+常量节+校验 | 高 |
| WindowsExeFileFamily | 10 | EXE 文件族（区间/版本粗略比对） | 高 |
| WorldDropInfo | 4 | 世界掉落信息结构（地图/掉落子系统） | 低 |
| WorldDropItemChunck | 2 | 世界掉落块结构 | 低 |
| WorldMapDungeon | 5 | 世界地图副本数据（vector 元素） | 低 |
| WpBonusPointData | 3 | WP 奖励点数据（CUserCharacInfo::getWpBonusPoint） | 中 |
| WpBonusPointResult | 3 | WP 奖励点结果 | 中 |
| WriteLogSwitch | 2 | TimeLog 写日志开关（静态初始化构造） | 中 |
| XNuclear | 307 | Hades 命名空间 + PACKET_SEND_TIME 静态数据表 | 中 |
| XNuclear::CHades_GameSvr | 4 | 空标记类型（GameSvr 配置占位） | 中 |
| break_away_prevent::CBreakAwayPreventSystem | 14 | 防流失/回流奖励系统 | 高 |
| disconnect_detecter | 3 | 断线检测命名空间（单例访问器） | 高 |
| disconnect_detecter::CDisconnectDetecter | 12 | PvP/突袭异常断线检测 | 高 |
| disconnect_detecter::DetectedObjectKey | 3 | 检测对象键 | 高 |
| game_master | 11 | GM 命令框架命名空间数据符号 | 高 |
| game_master::BlueMarbleSet | 5 | 蓝弹珠活动数据（GM 命令辅助） | 中 |
| game_master::CAchievementAllClear | 3 | GM 成就全部清除 | 高 |
| game_master::CAchievementClear | 4 | GM 成就清空 | 高 |
| game_master::CAchievementNoClear | 3 | GM 成就保持不清 | 高 |
| game_master::CAchievementReport | 3 | GM 成就上报 | 高 |
| game_master::CAchievementReset | 3 | GM 成就重置 | 高 |
| game_master::CAddItemByMail | 4 | GM 邮件发放物品 | 高 |
| game_master::CAddItemPollutionCmd | 5 | GM 添加污染物品 | 高 |
| game_master::CAdjustCharacStat | 3 | GM 调整角色属性 | 高 |
| game_master::CAssaultAbuseUserCmd | 3 | GM 突袭滥用用户处理 | 高 |
| game_master::CAutoMarketConditionsControlCmd | 3 | GM 自动市场条件控制 | 高 |
| game_master::CBillingRechargeCommand | 4 | GM 充值命令 | 高 |
| game_master::CBindCubeTest | 4 | GM 绑定立方测试 | 高 |
| game_master::CBingoGmTest | 6 | GM 宾果活动测试 | 高 |
| game_master::CBloodMonsterListCmd | 3 | GM 血怪列表 | 高 |
| game_master::CBoosterTest | 18 | GM 强化/宝箱/徽章掉落测试（printClient/printServer） | 高 |
| game_master::CChangeCharacName | 4 | GM 角色改名 | 高 |
| game_master::CChangeExpertJobCmd | 4 | GM 转职命令 | 高 |
| game_master::CChangeExpertJobExpCmd | 4 | GM 职业经验调整 | 高 |
| game_master::CChangeNPCFavorCmd | 4 | GM NPC 好感度调整 | 高 |
| game_master::CChangeNPCMaxDayCmd | 4 | GM NPC 每日限购调整 | 高 |
| game_master::CCharacStatCmd | 3 | GM 角色属性命令 | 高 |
| game_master::CChoiceItem | 4 | GM 选择物品 | 高 |
| game_master::CCirculationStatisticCmd | 3 | GM 流通统计 | 高 |
| game_master::CClearAvatarInvenCmd | 4 | GM 清空时装背包 | 高 |
| game_master::CClearInventoryCmd | 4 | GM 清空普通背包 | 高 |
| game_master::CClearRewardTest | 5 | GM 奖励清除测试 | 高 |
| game_master::CCommand | 8 | GM 命令基类（executeTemplate） | 高 |
| game_master::CCommandMap | 8 | GM 命令注册表（int/string） | 高 |
| game_master::CCraneNeedMaterial | 3 | GM 吊机所需材料查询 | 中 |
| game_master::CCreateDisjointStoreCmd | 3 | GM 创建分线商店 | 高 |
| game_master::CDeleteAccountCargo | 3 | GM 删除账号货物 | 高 |
| game_master::CDeleteGuild | 3 | GM 删除公会 | 高 |
| game_master::CDropItem | 3 | GM 掉落物品（GetDispatcher 示例） | 高 |
| game_master::CEndEvent | 4 | GM 结束活动 | 高 |
| game_master::CEnduranceCmd | 4 | GM 耐久调整 | 高 |
| game_master::CGameMasterMgr | 6 | GM 命令管理器（双 map 查找） | 高 |
| game_master::CGetCashInven | 4 | GM 获取现金背包 | 高 |
| game_master::CGrowhWeaponEvent | 4 | GM 成长武器事件 | 高 |
| game_master::CGuildDebug | 4 | GM 公会调试 | 高 |
| game_master::CGuildExpBookDelete | 3 | GM 删除公会经验书 | 高 |
| game_master::CHeroMissionCommand | 4 | GM 英雄任务命令 | 高 |
| game_master::CInGameEventSetDay | 4 | GM 游戏内活动天数设置 | 高 |
| game_master::CIndependentDrop | 8 | GM 独立掉落（打印/聊天输出） | 高 |
| game_master::CIndependentDropByForce | 4 | GM 强制独立掉落 | 高 |
| game_master::CInvalidGold | 4 | GM 无效金币处理 | 高 |
| game_master::CItemDropInDungeon | 4 | GM 副本内掉落 | 高 |
| game_master::CItemDropRateCmd | 4 | GM 掉落率命令 | 高 |
| game_master::CItemInfoCmd | 5 | GM 物品信息命令 | 高 |
| game_master::CJuniorGameMaster | 3 | 初级 GM 权限分发器 | 高 |
| game_master::CLevelUp | 6 | GM 升级命令 | 高 |
| game_master::CLinkSystem | 3 | GM 链接系统命令 | 中 |
| game_master::CMacro | 10 | GM 宏录制/回放 | 高 |
| game_master::CMobileRestrictCommand | 5 | GM 手机限制命令 | 高 |
| game_master::CMonsterDropTest | 15 | GM 怪物掉落测试（金装/升级/一般列表） | 高 |
| game_master::CMoveCharacCmd | 4 | GM 移动角色 | 高 |
| game_master::CNpcLimitBuyItem | 4 | GM NPC 限购物品 | 中 |
| game_master::COneADayItemShop | 3 | GM 每日一次商店 | 中 |
| game_master::CParser | 5 | GM 命令解析器 | 高 |
| game_master::CPcroomPremiumCmd | 4 | GM 网吧高级状态命令 | 高 |
| game_master::CPcroomRewardReset | 5 | GM 网吧奖励重置 | 高 |
| game_master::CPickup | 4 | GM 拾取命令 | 高 |
| game_master::CPowerWarStraightVictory | 4 | GM 势力战直接胜利 | 高 |
| game_master::CPvPStartCmd | 4 | GM PvP 开始 | 高 |
| game_master::CRandomObjectTest | 9 | GM 随机物（扭蛋机）测试 | 高 |
| game_master::CRecipeSuccess | 4 | GM 配方成功命令 | 高 |
| game_master::CRefund | 4 | GM 退款命令 | 高 |
| game_master::CRequestDisjointCmd | 4 | GM 请求分线 | 高 |
| game_master::CReselectDailyQuestCmd | 3 | GM 重新选择每日任务 | 高 |
| game_master::CResetTrainingQuestCmd | 3 | GM 重置训练任务 | 高 |
| game_master::CResetTutorialFlagCmd | 3 | GM 重置教程标记 | 高 |
| game_master::CRunMacroCmd | 3 | GM 运行宏命令 | 高 |
| game_master::CSecretShopCheckLottery | 3 | GM 秘密商店抽奖检查 | 高 |
| game_master::CSecretShopNpc | 5 | GM 秘密商店 NPC | 高 |
| game_master::CSeniorGameMaster | 3 | 高级 GM 权限分发器 | 高 |
| game_master::CSetGuildFund | 4 | GM 设置公会资金 | 高 |
| game_master::CSetMultiboxFailCnt | 4 | GM 设置多开失败计数（反多开） | 高 |
| game_master::CSetTutorialFlagCmd | 4 | GM 设置教程标记 | 高 |
| game_master::CStartEvent | 5 | GM 开始活动 | 高 |
| game_master::CStartMacroCmd | 3 | GM 开始宏命令 | 高 |
| game_master::CStopMacroCmd | 3 | GM 停止宏命令 | 高 |
| game_master::CTeleportCmd | 3 | GM 传送命令 | 高 |
| game_master::CTestDisjointCmd | 3 | GM 测试分线 | 高 |
| game_master::CTestTradeRestrict | 4 | GM 测试交易限制 | 高 |
| game_master::CTitleBookAdjust | 3 | GM 称号书调整 | 高 |
| game_master::CTitleBookNoClear | 3 | GM 称号书保持不清 | 高 |
| game_master::CTitleBookReset | 3 | GM 称号书重置 | 高 |
| game_master::CUpgradeCardDebug | 5 | GM 升级卡调试 | 高 |
| game_master::CUserPremiumDelete | 3 | GM 删除用户高级状态 | 高 |
| game_master::CViewTutorialFlagCmd | 3 | GM 查看教程标记 | 高 |
| game_master::CVillageAttackedFightCmd | 3 | GM 村庄袭击-战斗 | 高 |
| game_master::CVillageAttackedStartCmd | 4 | GM 村庄袭击-开始 | 高 |
| game_master::CVillageAttackedStopCmd | 3 | GM 村庄袭击-结束 | 高 |
| game_master::DungeonDifficulty | 4 | GM 副本难度命令 | 高 |
| game_master::IGameMaster | 3 | GM 权限分发接口 | 高 |
| game_master::NpcLimitBuyItem | 4 | NPC 限购物品数据 | 中 |
| game_master::stMacroData | 4 | GM 宏数据结构 | 高 |
| VariableStat | 7 | 可变属性结构（地图/角色数据） | 低 |
| WarningDistance | 4 | 预警距离结构（怪物/地图预警） | 低 |
| WeaponInfo | 8 | 武器信息结构（vector 元素） | 低 |
| village_object | 2 | 村庄物体命名空间符号 | 中 |
| village_object::CVillageObjectMgr | 7 | 村庄物体管理器（register/unregister/on_move_area；GlobalData 成员，CUser 移动时同步） | 高 |
| village_object::IObject | 3 | 村庄物体接口 | 中 |
| village_object::Zone | 3 | 村庄区域键（operator<） | 中 |
| writeGuard<rwLock> | 4 | rwLock 写锁 RAII（GM 名单加载等） | 高 |

---

## 6. 假类 / 常量组 / 数据符号识别

| 名称 | 符号数 | 判定 | 依据 |
|---|---|---|---|
| XNuclear::PACKET_SEND_TIME | 307 | **常量数据表**（非类）：307 个同名的内部链接 `r` 符号（`_ZN8XNuclearL16PACKET_SEND_TIMEE`），散布 .rodata，疑为按包预置的发包时间/节流阈值表 | 全部为 `r` 类型，无方法；地址 0x8b25978~0x8cfcb30；无代码引用（disasm 0 命中） |
| XNuclear::CHades_GameSvr | 4 | **空标记类型**：仅 C1/D1 | 无成员方法 |
| CRijndael_fake | 10 | **测试桩/假实现**：显式 “_fake”，仅自引用 | GetBlockSize 只在自身 Pad/Encrypt 内调用；无外部调用 |
| SimpleEncryption | 12 | **死代码**（真实类但运行时无消费） | encryptUINT/decryptUINT/instance 均无外部调用 |
| WindowsCodeProtectorServer + WindowsExeFile(Family) + WindowsDataFile(Family) | 14+9+10+6+10 | **已编译未接线簇**：代码完整但无实例化/外部调用（vtable 无、ctor 无调用者） | rg 全 disasm 无 `call <ctor>` |
| WriteLogSwitch | 2 | **静态开关对象**：仅 ctor/dtor（TimeLog 单元静态初始化构造） | 构造点 @0x854ff3e 在 `__static_initialization...` |
| CodeHackChecksum | 2 | **纯数据结构**：32B 校验载荷，仅 dtor | 无方法 |
| CaptchaGen::kKoreanGeneral / kTaiwanAlphabet / kJapaneseHirakana (+Count) | 6 | **常量字符集表**（rodata R 类型） | 0x8b2bca0/0x8b2c444~0x8b2c534 |
| CaptchaGen::ImageOption | 2 | **选项结构**：仅 ctor/dtor | 无方法 |
| game_master::stMacroData | 4 | **数据结构**（宏参数容器） | 仅 ctor/dtor/引用 |
| disconnect_detecter::DetectedObjectKey | 3 | **键结构**（map 键，operator<） | 无业务方法 |
| WpBonusPointData / WpBonusPointResult | 3/3 | **数据结构**（clear + ctor/dtor） | 无业务方法 |
| WeaponInfo / VariableStat / WorldMapDungeon / WorldDropInfo / WorldDropItemChunck / WarningDistance | 8/7/5/4/2/4 | **地图/掉落/角色数据结构**（多为 vector 元素类型，误入本组） | 无业务方法；使用点在 0x835~0x839 地图数据区 |
| BlueMarbleSet | 5 | **GM 命令辅助数据**（蓝弹珠活动），非安全类 | 由 game_master 命令使用（0x84b2327 getParam） |
| village_object::Zone / IObject | 3/3 | **接口/键类型**（村庄物体系统） | 无业务方法 |
| writeGuard<rwLock> | 4 | **RAII 模板实例**（写锁） | 仅 ctor/dtor |
| game_master::DungeonDifficulty | 4 | **GM 命令类**（设置副本难度），非枚举 | 有 execute/parse |
| XNuclear::ENUM_HADES_SECURITY / ENUM_GOLD_CONTROL_REASON / WongWork::ENUM_HACKTYPE / AccountHackingType / SECURITY_PROTCTION / RestrictCategory / CRYPTO_GRAPH_TYPE / CRYPTO_CHECKSUM_TYPE / CRYPTO_MODE_TYPE / ENUM_CMDPACKET / CountryCode / DISCONN_SIG | — | **枚举/类型**（无独立符号类，体现在方法签名中） | demangled 签名 |

---

## 7. 关键地址索引（G7）

| 符号/函数 | 地址 |
|---|---|
| XNuclear::CHades ctor / Init / Send_Login / GoldTracking / RunHadesAction | 0x8697bc6 / 0x84b91e8 / 0x84b9200 / 0x84b949a / 0x84b95bc |
| CHadesServerProxy ctor / HadesSvrInit / SendHeartBeatPacket | 0x8470510 / 0x847059a / 0x8470682 |
| Secu_GoldControl::AddMoney / SubMoney / AddAuctionMoney / SavetoDB / MailComplete | 0x828772a / 0x82879e4 / 0x828784a / 0x82872ca / 0x8287e68 |
| Secu_AccountHacking::sendGold / sendMail / checkAccountHackingHackType / getMatchingHacktype | 0x8278cce / 0x8278b48 / 0x8278a48 / 0x827912a |
| Secu_HackLogCheck::MoveMap / DieMob；Secu_MonsterCheck::Check223；Secu_DungeonAverageCheck::CheckHackTypeEndDungeon | 0x827a7f4 / 0x827a81c / 0x827ad98 / 0x8279a12 |
| CHackLog_InvalidAreaMove::GetHackType / CHackLog_InvalidUsingSkill::GetHackType / CHackLog_OverDamage::Get* | 0x86d272c / 0x8286656 / 0x82869a2 等 |
| CTraceMobDieHack::reportHackInfo / traceEnd | 0x8599cb2 / 0x8599a88 |
| CUser::checkCodeChecksum / checkCodeChecksumRange / onUpdateHackCount / LogHistory / DisConnSig | 0x867ebba / 0x867ea5c / 0x867fdcc / 0x867c8fe / 0x86489f4 |
| Dispatcher_CodeCheckSum / Inter_CodeChecksumRange / Dispatcher_SecuDataControl | 0x82044b0 / 0x84d0648 / 0x821f612 |
| Cipher ctor / CreateCryptoGraph / CreateCryptoChecksum / InitCipherKeyString / G_Cipher | 0x8097196 / 0x809df90 / 0x809e309 / 0x82a025a / 0x82a713a |
| GlobalData::s_secu_cipher_keystring_manager_（5000×Cipher*） | BSS 0x940be80 |
| PacketBuf::encrypt_packet / finalize / encFinalize；CUser::Parsing | 0x858d86a / 0x858d548 / 0x858df30 / 0x8647890 |
| Dispatcher_SecurityCardAuthRpy::process / Dispatcher_MouseRegister::dispatch_sig / Sanicova::CPad::GenerateRandomKeyIdx | 0x82627ca / 0x82637fe / 0x8599918 |
| CaptchaGen ctor / GlobalData::InitCaptcha / GenerateCaptchaData / Timer_GenerateCaptchaData::dispatch_sig | 0x80de68c / 0x829d438 / 0x829d4b0 / 0x863b29c |
| CGM_Manager ctor / LoadGmListFromDb / LoadGmDataFromDb | 0x82990d0 / 0x8299530 / 0x8299740 |
| Dispatcher_New_Gmdebug_Command / DoUserDefineCommand / CGameMasterMgr::HandleRequest / CCommand::executeTemplate | 0x820bbde / 0x820ba90 / 0x84a8c6e / 0x84b3f90 |
| ServiceRestrictManager ctor / loadPolicy / RestrictCategory::enumStringRestrict | 0x816e272 / 0x816e7d6 / 0x93700a0 |
| CSecu_ProtectionField::Check / GetProtectionType | 0x8288a02 / 0x82880dc |
| CLocalChinaErrorDispatcher ctor / doErrorDispatcher / PacketDispatcher::doDispatch | 0x8128c34 / 0x812af6a / 0x8594c14 |
| break_away_prevent::CBreakAwayPreventSystem ctor / giveBreakAwayDungeonClearReward / updateUsedCera | 0x831c3e0 / 0x831d164 / 0x831ce5e |
| disconnect_detecter::CDisconnectDetecter ctor / TimerDetectDisconnect::dispatch_sig | 0x82348df / 0x86374bc |
| WindowsCodeProtectorServer ctor / WindowsExeFileFamily::GenerateChecksum | 0x8575462 / 0x8574cf0 |

---

## 8. 待定项

1. `XNuclear::PACKET_SEND_TIME`（307 个同名 rodata 局部符号）的确切语义——疑为发包节流/耗时表，但无代码引用，无法确认消费方。
2. CaptchaGen 生成的验证码**如何交付/校验**（未找到发包路径，可能经通用 0x6e/0x6f 通道或已由运营层剥离）。
3. `WindowsCodeProtectorServer` 簇在正式构建中由哪个进程/工具消费（Linux 服二进制内未接线）。
4. `SimpleEncryption`、`CHackLog_InvitationPaperSellToNPC`、`XorRand8`、`CRijndael_fake` 的运行时消费方缺失，判定为残留/测试代码（高置信度，但无法 100% 排除间接调用）。
5. `Secu_MonsterCheck::Check223/224/225` 与 ENUM_HACKTYPE 的具体映射（仅确认怪物类型常量 0xc7/0x95 等）。
