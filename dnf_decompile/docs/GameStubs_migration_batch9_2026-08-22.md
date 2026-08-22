# GameStubs 迁移 batch-9：顶层 42 桩清零（真实符号迁移 + 发明符号修复）（2026-08-22）

## 目标
将 GameStubs.cpp 中最后 42 个顶层桩函数全部迁出：真实 ORIG 符号迁移到对应真实 TU
（ORIG 签名精确一致，nm 验证 T），发明符号（错误 ABI 的本地版本）按 ORIG 报告修正
签名/命名空间/类成员形态后由正确 TU 提供。目标：GameStubs 顶层桩清零。

## 判定口径
- 每个桩先经 `nm -C /home/wangyilei/下载/df_game_r` 核对 ORIG 是否真实符号及精确签名。
- 42 个桩全部对应真实 ORIG 符号（T 或 W）；所谓「发明符号」实为真实符号的错误
  ABI 本地版本（错误签名/错误命名空间/错误类形态），逐一修正后迁移。

## 迁移清单（42 符号 → 目标 TU）

| 符号（demangled） | ORIG 地址 | 迁往 TU | 说明 |
|---|---|---|---|
| `_NS_PI_MakeHash_NOTI(PacketBuf*)` | 0x82746f3 T | `PacketBuf.cpp:834` | MD5 折叠 16→4 字节写包尾 |
| `_checkTimeoutItem(Inven_Item const&)` | 0x867cf8d T | `CDataManagerScripts.cpp:254` | 过期判定（vtable +0xc/+0x10/+0x48） |
| `GetIdentityFromDB(MySQL*)` | 0x83fbc66 T | `MySQL.cpp:463` | 包装 DBCommon::GetIdentity（@@identity） |
| `GetIntegratedPvPItemAttr(Inven_Item const&)` | 0x84fc5ff T | `CDataManagerScripts.cpp`（含 `_getIntegratedPvPItemAttr` 0x84fc541） | 双通道分支（PvP 整合通道→GetReSealCount<<5） |
| `SendChangeTradeState(...)` | 0x852f0a0 T | `CTradeSpace.cpp:74` | 交易状态包（头 0x11）+ 双端 Send |
| `OS_API::GetDateTimeTick()` | 0x858c802 T | `CSystemTime.cpp:54` | 返回 s_systemTime_ 的 getCurSec() |
| `RandomItemTable::Set(vector<int>*)` | 0x89bba40 T | `CEquipItem.cpp:797` | 相邻配对，奇下标累加 m_field0 |
| `addSkillOnCreateCharacter(_Mastered_skill*, int)` | 0x8604fe2 T | `SkillSlot.cpp:45` | job∈[0,10]，按职业技能表落槽位区间 |
| `GetTenThousandPercentage(int, int)` | 0x8550fc9 W | `CUserCharacInfo.cpp:3954` | value*percent/10000 |
| `CStackableItem::IsExpAffect()` | 0x8694736 W | `CStackableItem.cpp:1220` | m_char2e7 != 0 |
| `CItem::isPackagable() const` | 0x828b5b4 W | `CItem.cpp:212` | m_char60 == 1 |
| `UpgradeSeparateInfo::SetUpgradeSeparate(unsigned char)` | 0x84e906a W | `Inven_Item.cpp` | (m_field&0xe0)|(value&0x1f) |
| `GetInstanceCommonStatisticsMgr()` | 0x860e765 T | `CCommonStatisticsMgr.cpp` | 函数内 static 单例 |
| `G_TimerQueue()` | 0x80f647c W | `TimerQueue.cpp` | GlobalInstance<TimerQueue> |
| `WarAreaCounter::GetCurrenTimeTable()` | 0x89024c4 T | `WarField.cpp` | localtime_r 时段查表 |
| `WarAreaCounter::GetWarRoomCountAtPeekTime(int)` | 0x82a3d80 W | `WarField.cpp` | m_countTable 行索引 |
| `WarAreaCounter::GetWarRoomCountFirstIndex(int)` | 0x82a3df4 W | `WarField.cpp` | 累加 j<idx |
| `WarAreaCounter::GetWarRoomCountLastIndex(int)` | 0x82a3e90 W | `WarField.cpp` | 累加 j<=idx |
| `G_EpollHandler()` | 0x82a70ab W | `EpollHandler.cpp` | GlobalInstance<EpollHandler> |
| `ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem()` | 0x832de18 T | `CItemList.cpp` | 输出 vector 排序 |
| `Arad_GiftItem_Set::open(STStackableScript*)` | 0x81a2f1e T | `CItemList.cpp:1807` | 礼物槽位登记 map<long long,Data> |
| `WongWork::CItemUpgrade::getUpgradeItemRepairCostRate(int,bool) const` | 0x8549148 W | `CItemUpgrade.cpp:20` | flag 分支取表 +0x9c 索引 |
| `CChattingEmoticonList::find_emoticon(int)` | 0x80e581c T | `CDataManager.cpp:840` | map find 返回对象指针 |
| `CChattingEmoticonList::ReCalc(CChattingEmoticonConfig&, CUser const&)` | 0x80e5880 T | `CDataManager.cpp:848` | 签名修正（原桩 void* 错误）+ 重排 |
| `WongWork::CItemGeneratorMgr::setDropRatio(float)` | 0x8534278 T | `CDataManagerScripts.cpp:49`（已存在） | 删除全局发明符号，CDataManager.h 改 WongWork 类型 |
| `AccountCargoScript::GetCurrUpgradeInfo(int)` | 0x88c80ba T | `CDataManagerScripts.cpp:127` | map find 返回 &second |
| `AccountCargoScript::GetCreateInfo()` | 0x88c8056 T | `CDataManagerScripts.cpp:117` | begin()->second |
| `AccountCargoScript::GetNextUpgradeInfo(int)` | 0x88c8124 T | `CDataManagerScripts.cpp:137` | find 后 ++ |
| `SecretShopScript::GetNpcByDungeonIdx(int&,int,int)` | 0x8a828f8 T | `CDataManagerScripts.cpp:153` | equal_range + 加权抽取 |
| `SecretShopScript::GetNpcByDungeonLev(int&,int,int)` | 0x8a8293c T | `CDataManagerScripts.cpp:165` | GetLevelIdx + equal_range |
| `importItemShopScript(ItemShopScript*, char const*)` | 0x89dc5b4 T | `CItemShop.cpp:45` | ScanType 关键字循环解析 |
| `SetLightServerFlag(bool)` | 0x8a8cba5 W | `CDataManagerScripts.cpp:238` | 写全局 bool 0x940b558 |
| `createStackableLotteryInfo(LotteryInfo*, vector<int>*)` | 0x89bacc1 T | `CDataManagerScripts.cpp:172` | 前 2 + 每 3 元素一组 |
| `createGlobalEffectInfo(vector<stGlobalEffect_t>&, vector<int>*)` | 0x89bae94 T | `CDataManagerScripts.cpp:202` | 签名修正（原桩 vector<char>& 错误）+ 三元组 |
| `DeleteInvalidItemScript::IsInvalidItem2Delete(int)` | 0x8ac2096 T | `CDataManagerScripts.cpp:147` | map find != end（C1/D1 一并迁移） |
| `CStackableItem::getStackableLimit() const` | 0x822c9fc W | `CStackableItem.cpp:1214` | m_int28c |
| `CEquipItem::get_sub_type() const` | 0x833eecc W | `CEquipItem.cpp:786` | m_randomTable.m_field18 |
| `write_log_gain_money(eMoneyAddReason, int, CUser*)` | 0x84febd9 T | `CInventory.cpp:31` | ABI 修正（原桩 (int,int,unsigned int) 错误） |
| `write_log_use_money(eMoneySubReason, int, CUser*)` | 0x84fed9b T | `CInventory.cpp:79` | 同上 |
| `isGainedGoldFromDungeonReason(eMoneyAddReason)` | 0x850d32a W | `CInventory.cpp:26` | reason==4 || reason==0xf |
| `DB_LoadCerashopAddRestrictType::makeRequest(CUser*)` | 0x80e1ff6 T | `DB_CerashopAddRestrict.cpp`（新 TU） | 类成员（原桩为扁平发明名），0x341 包体 |
| `DB_SaveCerashopAddRestrictType::makeRequest(CUser*, DBInputData&)` | 0x80e17ba T | 同上 | 0x340 包体，op 分支 |

## 新增/登记
- 新 TU `DB_CerashopAddRestrict.cpp` 登记入 `source/cmake/game/CMakeLists.txt`（L330）。
- `CItemGeneratorMgr.h` 权威声明（WongWork 命名空间），CDataManager.h 改
  `WongWork::CItemGeneratorMgr*`（m_itemGeneratorMgr / getItemGenerator）。
- WarField.cpp 删除本地重复 `WongWork::CItemGeneratorMgr` 定义（避免 redefinition）。

## compare / 验收
（compare_tu_game_orig.py，AE 口径；DIFF 均为「算法正确即可」的非逐指令对齐翻译）
- `CItem.cpp.o`：identical=63 ae=102（合计 165），near=0，diff=0，missing=57
- `EpollHandler.cpp.o`：identical=2 ae=18（合计 20），diff=0
- `CDataManagerScripts.cpp.o`：含 _checkTimeoutItem/GetIntegratedPvPItemAttr/AccountCargo×3/
  SecretShop×2/createStackableLotteryInfo/createGlobalEffectInfo/SetLightServerFlag/
  IsInvalidItem2Delete；diff 均为 POD 脚本 C1/D1 memset→默认构造翻译
- `CStackableItem.cpp.o`：getStackableLimit/IsExpAffect 干净（diff 仅 STL 模板实例）
- `CEquipItem.cpp.o`：get_sub_type/RandomItemTable::Set 干净
- `CTradeSpace.cpp.o`：SendChangeTradeState 已实现
- `CItemUpgrade.cpp.o`：getUpgradeItemRepairCostRate 已实现
- `CDataManager.cpp.o`：find_emoticon/ReCalc 已实现

- `cmake --build dnf_decompile/build/game -j16` → **0 错误**（df_game_r 生成，03:00）。
- 全量 `nm -C df_game_r`：42 个 ORIG 签名符号全部由真实 TU 提供（T），
  GameStubs.cpp.o 不再 define 其中任何符号（grep 残留 = 0）。
- 发明符号残留检查（built binary）：全局 `CItemGeneratorMgr::setDropRatio`、
  扁平 `DB_*CerashopAddRestrictType_makeRequest`、`write_log_*(int,int,unsigned int)`、
  全局 `CItemGeneratorMgr::~CItemGeneratorMgr` 全部消失（grep = 0）。

## 未迁移项（本轮范围外）
- 非 42 清单的剩余 GameStubs 顶层桩（GetInvenTypeFromItemSpace/GetInvenSlot/
  createRecipeInfo/createStackableMultiBoxLotteryInfo/getAvatarSocket/
  channel_script_t::getChannelInfo/getBonusRate/CServerProxyMgr 模板/
  Import*Script 等）分属其他批次/peer 域。
