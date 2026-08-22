# GameStubs 迁移 batch-7：STL 容器模板实例显式实例化迁移 + compare 记录（2026-08-22）

## 目标
把 GameStubs.cpp 中「STL 容器模板实例符号（正确 mangled，可由真实标准库显式实例化
产生）」的 asm 影子桥接迁到独立 TU，删除 GameStubs 桩，构建验证 0 错误。

## 判别方法
对 GameStubs.cpp 全部 66 个 asm 桥接逐一:
- **c++filt 可正常 demangle** → 真实 C++ 可精确生成该符号 → 迁移候选；
- **c++filt 失败（返回原文）** → ORIG 错拼 mangled 名（错误长度前缀/类名），编译器
  无法生成 → 必须保留 asm 桥接。
- 对迁移候选进一步检查：信号不是唯一提供者、不属任务确认「不可迁移」清单（类型分歧/
  GameWorld 冲突域/C++98 局部类型模板）。

## 新建 TU
`source/DNFServer/GameServer/Game/ContainerTemplateInstantiations.cpp`（入 CMake，
`source/cmake/game/CMakeLists.txt` 第 319 行）。
显式实例化 + 少量 force-使用函数（保证 map Dtor、iterator operator-> 等按需符号发射），
全部为弱符号，替换 GameStubs 空桩强符号。

## 迁移清单（24 个符号，3 组）

### 组 1：CTraceMobDieHack 容器（15 个，编译期引用 CTraceMobDieHack.cpp）— 原 L1621-1656
- `std::map<unsigned short, stMonsterDamageLog_t>`：C1/D1/clear/insert/operator[]
- `std::vector<stHackLog_t>`：C1/D1/begin/end/clear/push_back
- `__gnu_cxx::operator==`(vector<stHackLog_t>)、`std::find`<vector<stHackLog_t>迭代器>、`std::min<float>`
- 显式实例化 `template class std::map<unsigned short, stMonsterDamageLog_t>` +
  `template class std::vector<stHackLog_t>` + `std::find`/`__gnu_cxx::operator==`/`std::min<float>`

### 组 2：Village map<int,TownAreaScript>（6 个，编译期引用 Village.cpp）— 原 L1599-1617
- `std::map<int, TownAreaScript>`：begin/end/size(const)
- `std::_Rb_tree_iterator<pair<const int,TownAreaScript>>`：operator++(int)/operator!=/operator->
- 显式实例化 `template class std::map<int, TownAreaScript>` + force 迭代

### 组 3：CParty 容器（3 个，编译期引用 CParty.cpp/WarRoom.cpp）— 原 L845-852
- `std::vector<MapInfo>`：C1/D1
- `std::map<int, map_monster>::clear`
- 显式实例化 `template class std::vector<MapInfo>` + `template class std::map<int,map_monster>`

## 保留清单及原因（42 个仍存留）
| 类别 | 符号 | 原因 |
|---|---|---|
| cElection<int,4,4> ctor | `_ZN9cElectionIiLi4ELi4EEC1Ev` | 跨 TU 模板冲突：CMap.cpp / PvP_deps.cpp 各自定义 cElection 模板（<8,8> 特化）；<4,4> 仅 CParty 经 opaque 调用 |
| CStreamGuard::GetInBuffer | `_ZN12CStreamGuard11GetInBufferI...Ev`（2） | C++98 禁止函数局部 struct 作为模板实参（任务确认） |
| CHackLog_InvalidAreaMove | `...21IsInvalidMovableAreaEiiii` `...15isMovableRouteEiiiiii` `...11GetHackTypeEv` | demangle 失败（ORIG 错误长度前缀）+ GameWorld 冲突域（任务确认） |
| WongWork::CHackAnalyzer::addServerHackCnt | `_ZN8WongWork14CHackAnalyzer16addServerHackCntEP5CUserjiij` | GameWorld 冲突域（任务确认）；demangle 失败 |
| XNuclear::CHades::Send_ReturnToVillage | `_ZN8XNuclear5CHades20Send_ReturnToVillageEv` | GameWorld 冲突域（任务确认）；demangle 失败 |
| ARAD::Singleton<ServiceRestrictManager>::Get | `_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv` | GameWorld 冲突域（任务确认） |
| CDataManager::getItemGenerator | `_ZN12CDataManager16getItemGeneratorEv` | 类型分歧（CGeneratorCommonData@+0x3e0 未建）（任务确认） |
| CItemGeneratorMgr::getGenerator | `_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE` | 类型分歧（m_generators[8]@+0xf0 未建模）（任务确认） |
| STEventCharacterInfo C1/D1 | `_ZN20STEventCharacterInfoC1Ev` `...D1Ev` | 重复类型（CEventCharacterHandler 本地类 vs 头文件）（任务确认） |
| ServerParameterScript isDungeonOpen | `_ZN23ServerParameterScript12isDungeonOpenEv` | demangle 失败：ORIG 用 23 但类名 21 字符，真实 C++ 生成 `_ZN21...Ei`（签名亦不同） |
| ServerParameterScript typo 3 | GetPaneltyDupMessage/GetCleanChattingCount/GetMaxCleanChattingCount | 同上 `_ZN23` 错误前缀，真实 ServerParameterScript.cpp 生成 `_ZN21` |
| Arad_EventPeriodDataManager::isApplied | `_ZNK30Arad_EventPeriodDataManager9isAppliedEii` | demangle 失败（`30` 前缀错误） |
| HeroMissionEvent（2）+ CTitleBook/CGM_Manager/CMonitorServerProxy/Packet_MiniCraneSeed/CUser::deleteSpecificItems/UserQuest::get_quest_info/CGMAccounts/isGM/CItemShop(2) typo | 见残留清单 | ORIG 错拼长度前缀，编译器无法生成（typo 段，demangle 全部失败） |
| CUser::GetServerGroup（非 const） | `_ZN5CUser14GetServerGroupEv` | 真实 CUser.cpp 提供 const 版（`_ZNK`），ORIG 另需非 const 版；迁移需新增重载并处理 CUser.h 声明，且当前由多名 parked 子代理维护 CUser |
| CUser::getCurCharacQuestR（非 const） | `_ZN5CUser18getCurCharacQuestREv` | 同上（const 版已存在，ORIG 非 const 版需新重载） |
| CUser::master_new_skills | `_ZN5CUser17master_new_skillsEP15_Mastered_skill20ENUM_SKILL_TREE_KIND` | CUser.h 无声明；调用方 CPremiumLetheManager 经 wrapper；需补头声明与语义 |
| LogManager::logFormat | `_ZN10LogManager9logFormatEiPKciS1_z` | 可变参数；需权威 LogManager 类/语义，涉多 TU |
| DB_AvatarChangeOwner::makeRequest | `_ZN20DB_AvatarChangeOwner11makeRequestEjjjh` | 无权威类定义（仅 CTradeSpace 引用）；需新建类 |
| TimerDetectDisconnect::registNextTimer | `_ZN21TimerDetectDisconnect15registNextTimerEv` | 无权威类定义（仅 CDisconnectDetecter 引用） |
| CHandlePremium::handleSetUserPCRoom | `_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll` | 无权威类定义（仅 CEventCharacterHandler 引用） |
| Is_restrictive_commercial_transaction_zone | `_Z42Is_restrictive_commercial_transaction_zoneiiii` | **可迁移**（真实自由函数，GameStubs 已有真实函数体），但新增经同一翻译的全局符号与 GameWorld 既有 wrapper 调用并存，需迁移 GameWorld.cpp:1533 调用点（冲突域，交 G2 批次统一处理） |
| CBattle_Field C1/D1/pickup_item/reset_hell_party_value/reset_field | `_ZN13CBattle_Field...`（5） | 真实 CBattle_Field.cpp 由多个 parked 子代理并行实现（语义实现非纯符号迁移）；空桩在此保证 CParty 链接 |

## compare / 验收
- `compare_tu_game_orig.py ContainerTemplateInstantiations.cpp.o`：
  `identical=76 + ae=292 合计 368`，NEAR=4，DIFF=7（DIFF 为真实 STL 实现与 ORIG
  特定实现差异，均为真实语义替换原空桩），另 `missing_in_game=725` 为模板实例化
  附带产生的辅助符号（良性 EXTRA）。
- `cmake --build dnf_decompile/build/game` → **0 错误**（df_game_r 生成）。
- GameStubs.cpp：**1714 → 1636 行**（删 78 行）。
- `nm df_game_r` 确认 24 个迁移符号均由 ContainerTemplateInstantiations.cpp.o 提供（W），
  GameStubs.cpp.o 不再 define 其中任何符号（grep 残留 = 0）。