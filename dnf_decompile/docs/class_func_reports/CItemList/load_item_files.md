# load_item_files

`_ZN9CItemList15load_item_filesEv`

`CItemList::load_item_files()`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08511738` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08511738  _ZN9CItemList15load_item_filesEv
#           CItemList::load_item_files()
# range [0x08511738, 0x08511e89]
08511738 +0x000:  push   %ebp
08511739 +0x001:  mov    %esp,%ebp
0851173b +0x003:  push   %edi
0851173c +0x004:  push   %esi
0851173d +0x005:  push   %ebx
0851173e +0x006:  sub    $0xe3c,%esp
08511744 +0x00c:  lea    -0x57c(%ebp),%eax
0851174a +0x012:  mov    %eax,(%esp)
0851174d +0x015:  call   0898f218 <_ZN17STStackableScriptC1Ev>  ; STStackableScript::STStackableScript()
08511752 +0x01a:  movl   $0x0,-0x24(%ebp)
08511759 +0x021:  movl   $0x0,-0x20(%ebp)
08511760 +0x028:  movl   $0x0,-0x1c(%ebp)
08511767 +0x02f:  lea    -0x58(%ebp),%eax
0851176a +0x032:  mov    %eax,(%esp)
0851176d +0x035:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
08511772 +0x03a:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08511777 +0x03f:  mov    %eax,(%esp)
0851177a +0x042:  call   08622374 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv>  ; sync_script::CSyncScript::truncate_dnf_item_info_table()
0851177f +0x047:  lea    -0xe1c(%ebp),%eax
08511785 +0x04d:  movl   $&g_stEquipmentScriptFileList,0x4(%esp)
0851178d +0x055:  mov    %eax,(%esp)
08511790 +0x058:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
08511795 +0x05d:  sub    $0x4,%esp
08511798 +0x060:  mov    -0xe1c(%ebp),%eax
0851179e +0x066:  mov    %eax,-0x58(%ebp)
085117a1 +0x069:  jmp    08511a4d <+0x315>
085117a6 +0x06e:  lea    -0xe10(%ebp),%eax
085117ac +0x074:  mov    %eax,(%esp)
085117af +0x077:  call   0898db82 <_ZN17STEquipmentScriptC1Ev>  ; STEquipmentScript::STEquipmentScript()
085117b4 +0x07c:  lea    -0x58(%ebp),%eax
085117b7 +0x07f:  mov    %eax,(%esp)
085117ba +0x082:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
085117bf +0x087:  add    $0x4,%eax
085117c2 +0x08a:  mov    %eax,(%esp)
085117c5 +0x08d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085117ca +0x092:  mov    %eax,-0x1c(%ebp)
085117cd +0x095:  cmpl   $0x0,-0x1c(%ebp)
085117d1 +0x099:  jne    085117dd <+0xa5>
085117d3 +0x09b:  mov    $0x0,%esi
085117d8 +0x0a0:  jmp    08511a32 <+0x2fa>
085117dd +0x0a5:  lea    -0x58(%ebp),%eax
085117e0 +0x0a8:  mov    %eax,(%esp)
085117e3 +0x0ab:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
085117e8 +0x0b0:  mov    (%eax),%eax
085117ea +0x0b2:  mov    %eax,0x10(%esp)
085117ee +0x0b6:  movl   $0x0,0xc(%esp)
085117f6 +0x0be:  movl   $0x0,0x8(%esp)
085117fe +0x0c6:  mov    -0x1c(%ebp),%eax
08511801 +0x0c9:  mov    %eax,0x4(%esp)
08511805 +0x0cd:  lea    -0xe10(%ebp),%eax
0851180b +0x0d3:  mov    %eax,(%esp)
0851180e +0x0d6:  call   08991aeb <_Z21ImportEquipmentScriptP17STEquipmentScriptPKcbii>  ; ImportEquipmentScript(STEquipmentScript*, char const*, bool, int, int)
08511813 +0x0db:  xor    $0x1,%eax
08511816 +0x0de:  test   %al,%al
08511818 +0x0e0:  je     0851185c <+0x124>
0851181a +0x0e2:  mov    -0x1c(%ebp),%eax
0851181d +0x0e5:  mov    %eax,0x14(%esp)
08511821 +0x0e9:  movl   $"ImportEquipmentScript() fail file - %s",0x10(%esp)
08511829 +0x0f1:  movl   $0x8e8,0xc(%esp)
08511831 +0x0f9:  movl   $&_ZZN9CItemList15load_item_filesEvE19__PRETTY_FUNCTION__,0x8(%esp)
08511839 +0x101:  movl   $"item.cpp",0x4(%esp)
08511841 +0x109:  movl   $0x1,(%esp)
08511848 +0x110:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0851184d +0x115:  mov    $0x0,%ebx
08511852 +0x11a:  mov    $0x1,%esi
08511857 +0x11f:  jmp    08511a32 <+0x2fa>
0851185c +0x124:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08511861 +0x129:  movl   $0x0,0x10(%esp)
08511869 +0x131:  movl   $0x0,0xc(%esp)
08511871 +0x139:  movl   $0x0,0x8(%esp)
08511879 +0x141:  lea    -0xe10(%ebp),%edx
0851187f +0x147:  mov    %edx,0x4(%esp)
08511883 +0x14b:  mov    %eax,(%esp)
08511886 +0x14e:  call   0861d87e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii>  ; sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int, int)
0851188b +0x153:  xor    $0x1,%eax
0851188e +0x156:  test   %al,%al
08511890 +0x158:  je     085118d1 <+0x199>
08511892 +0x15a:  mov    -0xc5c(%ebp),%eax
08511898 +0x160:  cmp    $0x16,%eax
0851189b +0x163:  je     085118d1 <+0x199>
0851189d +0x165:  mov    -0xc5c(%ebp),%eax
085118a3 +0x16b:  cmp    $0x17,%eax
085118a6 +0x16e:  je     085118d1 <+0x199>
085118a8 +0x170:  mov    -0xc5c(%ebp),%eax
085118ae +0x176:  cmp    $0x18,%eax
085118b1 +0x179:  je     085118d1 <+0x199>
085118b3 +0x17b:  mov    -0xc5c(%ebp),%eax
085118b9 +0x181:  cmp    $0x19,%eax
085118bc +0x184:  je     085118d1 <+0x199>
085118be +0x186:  mov    -0x1c(%ebp),%eax
085118c1 +0x189:  mov    %eax,0x4(%esp)
085118c5 +0x18d:  movl   $"insert_equiptment_item_to_db() fail file - %s",(%esp)
085118cc +0x194:  call   0807db60 <_init+0x458>
085118d1 +0x199:  movl   $0x23c,(%esp)
085118d8 +0x1a0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085118dd +0x1a5:  mov    %eax,%esi
085118df +0x1a7:  mov    %esi,%eax
085118e1 +0x1a9:  mov    %eax,(%esp)
085118e4 +0x1ac:  call   0851547e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1ab3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1ab3
085118e9 +0x1b1:  jmp    08511900 <+0x1c8>
085118eb +0x1b3:  mov    %edx,%ebx
085118ed +0x1b5:  mov    %eax,%edi
085118ef +0x1b7:  mov    %esi,(%esp)
085118f2 +0x1ba:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085118f7 +0x1bf:  mov    %edi,%eax
085118f9 +0x1c1:  mov    %ebx,%edx
085118fb +0x1c3:  jmp    08511a17 <+0x2df>
08511900 +0x1c8:  mov    %esi,-0x24(%ebp)
08511903 +0x1cb:  cmpl   $0x0,-0x24(%ebp)
08511907 +0x1cf:  jne    08511944 <+0x20c>
08511909 +0x1d1:  movl   $"new CEquipItem error",0x10(%esp)
08511911 +0x1d9:  movl   $0x903,0xc(%esp)
08511919 +0x1e1:  movl   $&_ZZN9CItemList15load_item_filesEvE19__PRETTY_FUNCTION__,0x8(%esp)
08511921 +0x1e9:  movl   $"item.cpp",0x4(%esp)
08511929 +0x1f1:  movl   $0x1,(%esp)
08511930 +0x1f8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08511935 +0x1fd:  mov    $0x0,%ebx
0851193a +0x202:  mov    $0x1,%esi
0851193f +0x207:  jmp    08511a32 <+0x2fa>
08511944 +0x20c:  lea    -0xe10(%ebp),%eax
0851194a +0x212:  mov    %eax,0x4(%esp)
0851194e +0x216:  mov    -0x24(%ebp),%eax
08511951 +0x219:  mov    %eax,(%esp)
08511954 +0x21c:  call   0850fd84 <_ZN10CEquipItem8set_itemER17STEquipmentScript>  ; CEquipItem::set_item(STEquipmentScript&)
08511959 +0x221:  mov    -0x24(%ebp),%eax
0851195c +0x224:  mov    %eax,(%esp)
0851195f +0x227:  call   08510818 <_ZN10CEquipItem6verifyEv>  ; CEquipItem::verify()
08511964 +0x22c:  xor    $0x1,%eax
08511967 +0x22f:  test   %al,%al
08511969 +0x231:  je     085119ad <+0x275>
0851196b +0x233:  mov    -0x1c(%ebp),%eax
0851196e +0x236:  mov    %eax,0x14(%esp)
08511972 +0x23a:  movl   $"Equip item verify fail. [%s]",0x10(%esp)
0851197a +0x242:  movl   $0x90a,0xc(%esp)
08511982 +0x24a:  movl   $&_ZZN9CItemList15load_item_filesEvE19__PRETTY_FUNCTION__,0x8(%esp)
0851198a +0x252:  movl   $"item.cpp",0x4(%esp)
08511992 +0x25a:  movl   $0x1,(%esp)
08511999 +0x261:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0851199e +0x266:  mov    $0x0,%ebx
085119a3 +0x26b:  mov    $0x1,%esi
085119a8 +0x270:  jmp    08511a32 <+0x2fa>
085119ad +0x275:  mov    -0x24(%ebp),%edi
085119b0 +0x278:  mov    -0x24(%ebp),%eax
085119b3 +0x27b:  mov    %eax,(%esp)
085119b6 +0x27e:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
085119bb +0x283:  mov    %eax,%esi
085119bd +0x285:  mov    -0x24(%ebp),%eax
085119c0 +0x288:  mov    %eax,(%esp)
085119c3 +0x28b:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
085119c8 +0x290:  mov    %edi,0xc(%esp)
085119cc +0x294:  mov    %esi,0x8(%esp)
085119d0 +0x298:  mov    %eax,0x4(%esp)
085119d4 +0x29c:  mov    0x8(%ebp),%eax
085119d7 +0x29f:  mov    %eax,(%esp)
085119da +0x2a2:  call   0851129e <_ZN9CItemList11insert_itemEiiP5CItem>  ; CItemList::insert_item(int, int, CItem*)
085119df +0x2a7:  mov    &_ZN10GlobalData19s_pCompoundBindCubeE,%eax
085119e4 +0x2ac:  mov    -0x24(%ebp),%edx
085119e7 +0x2af:  mov    %edx,0x4(%esp)
085119eb +0x2b3:  mov    %eax,(%esp)
085119ee +0x2b6:  call   0832db00 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item15check_N_addItemER10CEquipItem>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem(CEquipItem&)
085119f3 +0x2bb:  lea    -0x50(%ebp),%eax
085119f6 +0x2be:  movl   $0x0,0x8(%esp)
085119fe +0x2c6:  lea    -0x58(%ebp),%edx
08511a01 +0x2c9:  mov    %edx,0x4(%esp)
08511a05 +0x2cd:  mov    %eax,(%esp)
08511a08 +0x2d0:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
08511a0d +0x2d5:  sub    $0x4,%esp
08511a10 +0x2d8:  mov    $0x2,%esi
08511a15 +0x2dd:  jmp    08511a32 <+0x2fa>
08511a17 +0x2df:  mov    %edx,%ebx
08511a19 +0x2e1:  mov    %eax,%esi
08511a1b +0x2e3:  lea    -0xe10(%ebp),%eax
08511a21 +0x2e9:  mov    %eax,(%esp)
08511a24 +0x2ec:  call   0898e298 <_ZN17STEquipmentScriptD1Ev>  ; STEquipmentScript::~STEquipmentScript()
08511a29 +0x2f1:  mov    %esi,%eax
08511a2b +0x2f3:  mov    %ebx,%edx
08511a2d +0x2f5:  jmp    08511e50 <+0x718>
08511a32 +0x2fa:  lea    -0xe10(%ebp),%eax
08511a38 +0x300:  mov    %eax,(%esp)
08511a3b +0x303:  call   0898e298 <_ZN17STEquipmentScriptD1Ev>  ; STEquipmentScript::~STEquipmentScript()
08511a40 +0x308:  test   %esi,%esi
08511a42 +0x30a:  je     08511a7d <+0x345>
08511a44 +0x30c:  cmp    $0x1,%esi
08511a47 +0x30f:  je     08511e6e <+0x736>
08511a4d +0x315:  lea    -0x54(%ebp),%eax
08511a50 +0x318:  movl   $&g_stEquipmentScriptFileList,0x4(%esp)
08511a58 +0x320:  mov    %eax,(%esp)
08511a5b +0x323:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08511a60 +0x328:  sub    $0x4,%esp
08511a63 +0x32b:  lea    -0x54(%ebp),%eax
08511a66 +0x32e:  mov    %eax,0x4(%esp)
08511a6a +0x332:  lea    -0x58(%ebp),%eax
08511a6d +0x335:  mov    %eax,(%esp)
08511a70 +0x338:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
08511a75 +0x33d:  test   %al,%al
08511a77 +0x33f:  jne    085117a6 <+0x6e>
08511a7d +0x345:  lea    -0xe1c(%ebp),%eax
08511a83 +0x34b:  movl   $&g_stStackableScriptFileList,0x4(%esp)
08511a8b +0x353:  mov    %eax,(%esp)
08511a8e +0x356:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
08511a93 +0x35b:  sub    $0x4,%esp
08511a96 +0x35e:  mov    -0xe1c(%ebp),%eax
08511a9c +0x364:  mov    %eax,-0x58(%ebp)
08511a9f +0x367:  jmp    08511e11 <+0x6d9>
08511aa4 +0x36c:  lea    -0x58(%ebp),%eax
08511aa7 +0x36f:  mov    %eax,(%esp)
08511aaa +0x372:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
08511aaf +0x377:  add    $0x4,%eax
08511ab2 +0x37a:  mov    %eax,(%esp)
08511ab5 +0x37d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08511aba +0x382:  mov    %eax,-0x1c(%ebp)
08511abd +0x385:  cmpl   $0x0,-0x1c(%ebp)
08511ac1 +0x389:  je     08511e43 <+0x70b>
08511ac7 +0x38f:  lea    -0x58(%ebp),%eax
08511aca +0x392:  mov    %eax,(%esp)
08511acd +0x395:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
08511ad2 +0x39a:  mov    (%eax),%eax
08511ad4 +0x39c:  mov    %eax,0xc(%esp)
08511ad8 +0x3a0:  movl   $0x0,0x8(%esp)
08511ae0 +0x3a8:  mov    -0x1c(%ebp),%eax
08511ae3 +0x3ab:  mov    %eax,0x4(%esp)
08511ae7 +0x3af:  lea    -0x57c(%ebp),%eax
08511aed +0x3b5:  mov    %eax,(%esp)
08511af0 +0x3b8:  call   089aeec8 <_Z21ImportStackableScriptP17STStackableScriptPKcbi>  ; ImportStackableScript(STStackableScript*, char const*, bool, int)
08511af5 +0x3bd:  xor    $0x1,%eax
08511af8 +0x3c0:  test   %al,%al
08511afa +0x3c2:  je     08511b39 <+0x401>
08511afc +0x3c4:  mov    -0x1c(%ebp),%eax
08511aff +0x3c7:  mov    %eax,0x14(%esp)
08511b03 +0x3cb:  movl   $"importStackableScript fail file - %s",0x10(%esp)
08511b0b +0x3d3:  movl   $0x926,0xc(%esp)
08511b13 +0x3db:  movl   $&_ZZN9CItemList15load_item_filesEvE19__PRETTY_FUNCTION__,0x8(%esp)
08511b1b +0x3e3:  movl   $"item.cpp",0x4(%esp)
08511b23 +0x3eb:  movl   $0x1,(%esp)
08511b2a +0x3f2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08511b2f +0x3f7:  mov    $0x0,%ebx
08511b34 +0x3fc:  jmp    08511e6e <+0x736>
08511b39 +0x401:  call   081a1155 <_GLOBAL__I__ZN17CAradRyosikaEventC2Ev+0x1c>  ; global constructors keyed to CAradRyosikaEvent::CAradRyosikaEvent()+0x1c
08511b3e +0x406:  lea    -0x57c(%ebp),%edx
08511b44 +0x40c:  mov    %edx,0x4(%esp)
08511b48 +0x410:  mov    %eax,(%esp)
08511b4b +0x413:  call   081a2f1e <_ZN17Arad_GiftItem_Set4openEP17STStackableScript>  ; Arad_GiftItem_Set::open(STStackableScript*)
08511b50 +0x418:  test   %eax,%eax
08511b52 +0x41a:  setne  %al
08511b55 +0x41d:  test   %al,%al
08511b57 +0x41f:  je     08511ba3 <+0x46b>
08511b59 +0x421:  mov    -0x520(%ebp),%edx
08511b5f +0x427:  mov    -0x57c(%ebp),%eax
08511b65 +0x42d:  mov    %edx,0x18(%esp)
08511b69 +0x431:  mov    %eax,0x14(%esp)
08511b6d +0x435:  movl   $"[ERROR] Arad GiftItem Setting!! [item_idx:%d][levelt:%d]",0x10(%esp)
08511b75 +0x43d:  movl   $0x931,0xc(%esp)
08511b7d +0x445:  movl   $&_ZZN9CItemList15load_item_filesEvE19__PRETTY_FUNCTION__,0x8(%esp)
08511b85 +0x44d:  movl   $"item.cpp",0x4(%esp)
08511b8d +0x455:  movl   $0x1,(%esp)
08511b94 +0x45c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08511b99 +0x461:  mov    $0x0,%ebx
08511b9e +0x466:  jmp    08511e6e <+0x736>
08511ba3 +0x46b:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08511ba8 +0x470:  lea    -0x57c(%ebp),%edx
08511bae +0x476:  mov    %edx,0x4(%esp)
08511bb2 +0x47a:  mov    %eax,(%esp)
08511bb5 +0x47d:  call   08620968 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript>  ; sync_script::CSyncScript::insert_stackable_item_to_db(STStackableScript*)
08511bba +0x482:  xor    $0x1,%eax
08511bbd +0x485:  test   %al,%al
08511bbf +0x487:  je     08511bd4 <+0x49c>
08511bc1 +0x489:  mov    -0x1c(%ebp),%eax
08511bc4 +0x48c:  mov    %eax,0x4(%esp)
08511bc8 +0x490:  movl   $"insert_stackable_item_to_db() fail file - %s",(%esp)
08511bcf +0x497:  call   0807db60 <_init+0x458>
08511bd4 +0x49c:  movl   $0x3f0,(%esp)
08511bdb +0x4a3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08511be0 +0x4a8:  mov    %eax,%ebx
08511be2 +0x4aa:  mov    %ebx,%eax
08511be4 +0x4ac:  mov    %eax,(%esp)
08511be7 +0x4af:  call   08515762 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1d97>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1d97
08511bec +0x4b4:  jmp    08511c03 <+0x4cb>
08511bee +0x4b6:  mov    %edx,%esi
08511bf0 +0x4b8:  mov    %eax,%edi
08511bf2 +0x4ba:  mov    %ebx,(%esp)
08511bf5 +0x4bd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08511bfa +0x4c2:  mov    %edi,%eax
08511bfc +0x4c4:  mov    %esi,%edx
08511bfe +0x4c6:  jmp    08511e50 <+0x718>
08511c03 +0x4cb:  mov    %ebx,-0x20(%ebp)
08511c06 +0x4ce:  cmpl   $0x0,-0x20(%ebp)
08511c0a +0x4d2:  jne    08511c42 <+0x50a>
08511c0c +0x4d4:  movl   $"ptemp_stack_data is null",0x10(%esp)
08511c14 +0x4dc:  movl   $0x941,0xc(%esp)
08511c1c +0x4e4:  movl   $&_ZZN9CItemList15load_item_filesEvE19__PRETTY_FUNCTION__,0x8(%esp)
08511c24 +0x4ec:  movl   $"item.cpp",0x4(%esp)
08511c2c +0x4f4:  movl   $0x1,(%esp)
08511c33 +0x4fb:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08511c38 +0x500:  mov    $0x0,%ebx
08511c3d +0x505:  jmp    08511e6e <+0x736>
08511c42 +0x50a:  lea    -0x57c(%ebp),%eax
08511c48 +0x510:  mov    %eax,0x4(%esp)
08511c4c +0x514:  mov    -0x20(%ebp),%eax
08511c4f +0x517:  mov    %eax,(%esp)
08511c52 +0x51a:  call   0850d81e <_ZN14CStackableItem8set_itemER17STStackableScript>  ; CStackableItem::set_item(STStackableScript&)
08511c57 +0x51f:  mov    -0x20(%ebp),%eax
08511c5a +0x522:  mov    %eax,(%esp)
08511c5d +0x525:  call   0850fa14 <_ZN14CStackableItem6verifyEv>  ; CStackableItem::verify()
08511c62 +0x52a:  xor    $0x1,%eax
08511c65 +0x52d:  test   %al,%al
08511c67 +0x52f:  je     08511ca6 <+0x56e>
08511c69 +0x531:  mov    -0x1c(%ebp),%eax
08511c6c +0x534:  mov    %eax,0x14(%esp)
08511c70 +0x538:  movl   $"Stackable item verify fail. [%s]",0x10(%esp)
08511c78 +0x540:  movl   $0x948,0xc(%esp)
08511c80 +0x548:  movl   $&_ZZN9CItemList15load_item_filesEvE19__PRETTY_FUNCTION__,0x8(%esp)
08511c88 +0x550:  movl   $"item.cpp",0x4(%esp)
08511c90 +0x558:  movl   $0x1,(%esp)
08511c97 +0x55f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08511c9c +0x564:  mov    $0x0,%ebx
08511ca1 +0x569:  jmp    08511e6e <+0x736>
08511ca6 +0x56e:  mov    -0x20(%ebp),%eax
08511ca9 +0x571:  mov    (%eax),%eax
08511cab +0x573:  add    $0xc,%eax
08511cae +0x576:  mov    (%eax),%edx
08511cb0 +0x578:  mov    -0x20(%ebp),%eax
08511cb3 +0x57b:  mov    %eax,(%esp)
08511cb6 +0x57e:  call   *%edx
08511cb8 +0x580:  cmp    $0x7,%eax
08511cbb +0x583:  sete   %al
08511cbe +0x586:  test   %al,%al
08511cc0 +0x588:  je     08511d34 <+0x5fc>
08511cc2 +0x58a:  mov    -0x20(%ebp),%eax
08511cc5 +0x58d:  add    $0x1c4,%eax
08511cca +0x592:  mov    %eax,(%esp)
08511ccd +0x595:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08511cd2 +0x59a:  mov    %eax,%ebx
08511cd4 +0x59c:  mov    -0x20(%ebp),%eax
08511cd7 +0x59f:  add    $0x1d4,%eax
08511cdc +0x5a4:  mov    %eax,(%esp)
08511cdf +0x5a7:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08511ce4 +0x5ac:  cmp    %eax,%ebx
08511ce6 +0x5ae:  setne  %al
08511ce9 +0x5b1:  test   %al,%al
08511ceb +0x5b3:  je     08511d34 <+0x5fc>
08511ced +0x5b5:  movl   $0x5,0xc(%esp)
08511cf5 +0x5bd:  movl   $0x94f,0x8(%esp)
08511cfd +0x5c5:  movl   $&_ZZN9CItemList15load_item_filesEvE19__PRETTY_FUNCTION__,0x4(%esp)
08511d05 +0x5cd:  lea    -0x48(%ebp),%eax
08511d08 +0x5d0:  mov    %eax,(%esp)
08511d0b +0x5d3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08511d10 +0x5d8:  mov    -0x1c(%ebp),%eax
08511d13 +0x5db:  mov    %eax,0x8(%esp)
08511d17 +0x5df:  movl   $"Stackable item set_item fail (file [%s])",0x4(%esp)
08511d1f +0x5e7:  lea    -0x48(%ebp),%eax
08511d22 +0x5ea:  mov    %eax,(%esp)
08511d25 +0x5ed:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08511d2a +0x5f2:  mov    $0x0,%ebx
08511d2f +0x5f7:  jmp    08511e6e <+0x736>
08511d34 +0x5fc:  mov    -0x20(%ebp),%eax
08511d37 +0x5ff:  mov    (%eax),%eax
08511d39 +0x601:  add    $0xc,%eax
08511d3c +0x604:  mov    (%eax),%edx
08511d3e +0x606:  mov    -0x20(%ebp),%eax
08511d41 +0x609:  mov    %eax,(%esp)
08511d44 +0x60c:  call   *%edx
08511d46 +0x60e:  cmp    $0xd,%eax
08511d49 +0x611:  sete   %al
08511d4c +0x614:  test   %al,%al
08511d4e +0x616:  je     08511dc2 <+0x68a>
08511d50 +0x618:  mov    -0x20(%ebp),%eax
08511d53 +0x61b:  add    $0x1c4,%eax
08511d58 +0x620:  mov    %eax,(%esp)
08511d5b +0x623:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08511d60 +0x628:  mov    %eax,%ebx
08511d62 +0x62a:  mov    -0x20(%ebp),%eax
08511d65 +0x62d:  add    $0x1d4,%eax
08511d6a +0x632:  mov    %eax,(%esp)
08511d6d +0x635:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08511d72 +0x63a:  cmp    %eax,%ebx
08511d74 +0x63c:  setne  %al
08511d77 +0x63f:  test   %al,%al
08511d79 +0x641:  je     08511dc2 <+0x68a>
08511d7b +0x643:  movl   $0x5,0xc(%esp)
08511d83 +0x64b:  movl   $0x957,0x8(%esp)
08511d8b +0x653:  movl   $&_ZZN9CItemList15load_item_filesEvE19__PRETTY_FUNCTION__,0x4(%esp)
08511d93 +0x65b:  lea    -0x38(%ebp),%eax
08511d96 +0x65e:  mov    %eax,(%esp)
08511d99 +0x661:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08511d9e +0x666:  mov    -0x1c(%ebp),%eax
08511da1 +0x669:  mov    %eax,0x8(%esp)
08511da5 +0x66d:  movl   $"Stackable item set_item fail 2 (file [%s])",0x4(%esp)
08511dad +0x675:  lea    -0x38(%ebp),%eax
08511db0 +0x678:  mov    %eax,(%esp)
08511db3 +0x67b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08511db8 +0x680:  mov    $0x0,%ebx
08511dbd +0x685:  jmp    08511e6e <+0x736>
08511dc2 +0x68a:  mov    -0x20(%ebp),%esi
08511dc5 +0x68d:  mov    -0x20(%ebp),%eax
08511dc8 +0x690:  mov    %eax,(%esp)
08511dcb +0x693:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08511dd0 +0x698:  mov    %eax,%ebx
08511dd2 +0x69a:  mov    -0x20(%ebp),%eax
08511dd5 +0x69d:  mov    %eax,(%esp)
08511dd8 +0x6a0:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08511ddd +0x6a5:  mov    %esi,0xc(%esp)
08511de1 +0x6a9:  mov    %ebx,0x8(%esp)
08511de5 +0x6ad:  mov    %eax,0x4(%esp)
08511de9 +0x6b1:  mov    0x8(%ebp),%eax
08511dec +0x6b4:  mov    %eax,(%esp)
08511def +0x6b7:  call   0851129e <_ZN9CItemList11insert_itemEiiP5CItem>  ; CItemList::insert_item(int, int, CItem*)
08511df4 +0x6bc:  lea    -0x28(%ebp),%eax
08511df7 +0x6bf:  movl   $0x0,0x8(%esp)
08511dff +0x6c7:  lea    -0x58(%ebp),%edx
08511e02 +0x6ca:  mov    %edx,0x4(%esp)
08511e06 +0x6ce:  mov    %eax,(%esp)
08511e09 +0x6d1:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
08511e0e +0x6d6:  sub    $0x4,%esp
08511e11 +0x6d9:  lea    -0x4c(%ebp),%eax
08511e14 +0x6dc:  movl   $&g_stStackableScriptFileList,0x4(%esp)
08511e1c +0x6e4:  mov    %eax,(%esp)
08511e1f +0x6e7:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08511e24 +0x6ec:  sub    $0x4,%esp
08511e27 +0x6ef:  lea    -0x4c(%ebp),%eax
08511e2a +0x6f2:  mov    %eax,0x4(%esp)
08511e2e +0x6f6:  lea    -0x58(%ebp),%eax
08511e31 +0x6f9:  mov    %eax,(%esp)
08511e34 +0x6fc:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
08511e39 +0x701:  test   %al,%al
08511e3b +0x703:  jne    08511aa4 <+0x36c>
08511e41 +0x709:  jmp    08511e44 <+0x70c>
08511e43 +0x70b:  nop
08511e44 +0x70c:  call   0861ca94 <_ZN11sync_script16DisplayMaxLengthEv>  ; sync_script::DisplayMaxLength()
08511e49 +0x711:  mov    $0x1,%ebx
08511e4e +0x716:  jmp    08511e6e <+0x736>
08511e50 +0x718:  mov    %edx,%ebx
08511e52 +0x71a:  mov    %eax,%esi
08511e54 +0x71c:  lea    -0x57c(%ebp),%eax
08511e5a +0x722:  mov    %eax,(%esp)
08511e5d +0x725:  call   0899013c <_ZN17STStackableScriptD1Ev>  ; STStackableScript::~STStackableScript()
08511e62 +0x72a:  mov    %esi,%eax
08511e64 +0x72c:  mov    %ebx,%edx
08511e66 +0x72e:  mov    %eax,(%esp)
08511e69 +0x731:  call   08ae3750 <_Unwind_Resume>
08511e6e +0x736:  lea    -0x57c(%ebp),%eax
08511e74 +0x73c:  mov    %eax,(%esp)
08511e77 +0x73f:  call   0899013c <_ZN17STStackableScriptD1Ev>  ; STStackableScript::~STStackableScript()
08511e7c +0x744:  mov    %ebx,%eax
08511e7e +0x746:  lea    -0xc(%ebp),%esp
08511e81 +0x749:  add    $0x0,%esp
08511e84 +0x74c:  pop    %ebx
08511e85 +0x74d:  pop    %esi
08511e86 +0x74e:  pop    %edi
08511e87 +0x74f:  pop    %ebp
08511e88 +0x750:  ret
08511e89 +0x751:  nop
```

## 反编译 C

```c
// CItemList::load_item_files @ 0x8511738

/* CItemList::load_item_files() */

undefined4 __thiscall CItemList::load_item_files(CItemList *this)

{
  char cVar1;
  CSyncScript *pCVar2;
  CEquipItem *pCVar3;
  int iVar4;
  int *piVar5;
  Arad_GiftItem_Set *this_00;
  CStackableItem *pCVar6;
  int iVar7;
  undefined4 unaff_EBX;
  undefined4 local_e20 [3];
  STEquipmentScript local_e14 [436];
  int local_c60;
  undefined4 local_580 [23];
  undefined4 local_524;
  undefined4 local_5c;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_58 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_54 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_50 [4];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_2c [4];
  CEquipItem *local_28;
  CStackableItem *local_24;
  char *local_20;
  
  STStackableScript::STStackableScript((STStackableScript *)local_580);
  local_28 = (CEquipItem *)0x0;
  local_24 = (CStackableItem *)0x0;
  local_20 = (char *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
                    /* try { // try from 08511772 to 085117b3 has its CatchHandler @ 08511e50 */
  pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::truncate_dnf_item_info_table(pCVar2);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_e20);
  local_5c = local_e20[0];
  do {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_58);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c,
                       (_Rb_tree_iterator *)local_58);
    if (cVar1 == '\0') {
LAB_08511a7d:
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      begin((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *)
            local_e20);
      local_5c = local_e20[0];
      goto LAB_08511e11;
    }
    STEquipmentScript::STEquipmentScript(local_e14);
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
                    /* try { // try from 085117c5 to 085118dc has its CatchHandler @ 08511a17 */
    local_20 = (char *)std::string::c_str((string *)(iVar4 + 4));
    if (local_20 == (char *)0x0) {
      iVar4 = 0;
    }
    else {
      piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
      cVar1 = ImportEquipmentScript(local_e14,local_20,false,0,*piVar5);
      if (cVar1 == '\x01') {
        pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
        cVar1 = sync_script::CSyncScript::insert_equiptment_item_to_db(pCVar2,local_e14,0,0,0);
        if ((((cVar1 != '\x01') && (local_c60 != 0x16)) && (local_c60 != 0x17)) &&
           ((local_c60 != 0x18 && (local_c60 != 0x19)))) {
          printf("insert_equiptment_item_to_db() fail file - %s",local_20);
        }
        pCVar3 = operator_new(0x23c);
                    /* try { // try from 085118e4 to 085118e8 has its CatchHandler @ 085118eb */
        CEquipItem::CEquipItem(pCVar3);
        local_28 = pCVar3;
        if (pCVar3 == (CEquipItem *)0x0) {
                    /* try { // try from 08511930 to 08511a0c has its CatchHandler @ 08511a17 */
          LogManager::logFormat
                    (1,"item.cpp","bool CItemList::load_item_files()",0x903,"new CEquipItem error");
          unaff_EBX = 0;
          iVar4 = 1;
        }
        else {
          CEquipItem::set_item(pCVar3,local_e14);
          cVar1 = CEquipItem::verify(local_28);
          pCVar3 = local_28;
          if (cVar1 == '\x01') {
            iVar4 = CItem::get_index((CItem *)local_28);
            iVar7 = CItem::get_grade((CItem *)local_28);
            insert_item(this,iVar7,iVar4,(CItem *)pCVar3);
            ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem
                      (GlobalData::s_pCompoundBindCube,local_28);
            std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                      (local_54,(int)&local_5c);
            iVar4 = 2;
          }
          else {
            LogManager::logFormat
                      (1,"item.cpp","bool CItemList::load_item_files()",0x90a,
                       "Equip item verify fail. [%s]",local_20);
            unaff_EBX = 0;
            iVar4 = 1;
          }
        }
      }
      else {
        LogManager::logFormat
                  (1,"item.cpp","bool CItemList::load_item_files()",0x8e8,
                   "ImportEquipmentScript() fail file - %s",local_20);
        unaff_EBX = 0;
        iVar4 = 1;
      }
    }
                    /* try { // try from 08511a3b to 08511bdf has its CatchHandler @ 08511e50 */
    STEquipmentScript::~STEquipmentScript(local_e14);
    if (iVar4 == 0) goto LAB_08511a7d;
  } while (iVar4 != 1);
LAB_08511e6e:
  STStackableScript::~STStackableScript((STStackableScript *)local_580);
  return unaff_EBX;
LAB_08511e11:
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_50);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c,
                     (_Rb_tree_iterator *)local_50);
  if (cVar1 == '\0') goto LAB_08511e44;
  iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
  local_20 = (char *)std::string::c_str((string *)(iVar4 + 4));
  if (local_20 == (char *)0x0) goto LAB_08511e44;
  piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
  cVar1 = ImportStackableScript((STStackableScript *)local_580,local_20,false,*piVar5);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::load_item_files()",0x926,
               "importStackableScript fail file - %s",local_20);
    unaff_EBX = 0;
    goto LAB_08511e6e;
  }
  this_00 = (Arad_GiftItem_Set *)GlobalInstance<Arad_GiftItem_Set>::inst();
  iVar4 = Arad_GiftItem_Set::open(this_00,(STStackableScript *)local_580);
  if (iVar4 != 0) {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::load_item_files()",0x931,
               "[ERROR] Arad GiftItem Setting!! [item_idx:%d][levelt:%d]",local_580[0],local_524);
    unaff_EBX = 0;
    goto LAB_08511e6e;
  }
  pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar1 = sync_script::CSyncScript::insert_stackable_item_to_db
                    (pCVar2,(STStackableScript *)local_580);
  if (cVar1 != '\x01') {
    printf("insert_stackable_item_to_db() fail file - %s",local_20);
  }
  pCVar6 = operator_new(0x3f0);
                    /* try { // try from 08511be7 to 08511beb has its CatchHandler @ 08511bee */
  CStackableItem::CStackableItem(pCVar6);
  local_24 = pCVar6;
  if (pCVar6 == (CStackableItem *)0x0) {
                    /* try { // try from 08511c33 to 08511e48 has its CatchHandler @ 08511e50 */
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::load_item_files()",0x941,"ptemp_stack_data is null");
    unaff_EBX = 0;
    goto LAB_08511e6e;
  }
  CStackableItem::set_item(pCVar6,(STStackableScript *)local_580);
  cVar1 = CStackableItem::verify(local_24);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::load_item_files()",0x948,
               "Stackable item verify fail. [%s]",local_20);
    unaff_EBX = 0;
    goto LAB_08511e6e;
  }
  iVar4 = (**(code **)(*(int *)local_24 + 0xc))(local_24);
  if (iVar4 == 7) {
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (local_24 + 0x1c4));
    iVar7 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(local_24 + 0x1d4));
    if (iVar4 != iVar7) {
      cMyTrace::cMyTrace(local_4c,"bool CItemList::load_item_files()",0x94f,5);
      cMyTrace::operator()(local_4c,"Stackable item set_item fail (file [%s])",local_20);
      unaff_EBX = 0;
      goto LAB_08511e6e;
    }
  }
  iVar4 = (**(code **)(*(int *)local_24 + 0xc))(local_24);
  if (iVar4 == 0xd) {
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (local_24 + 0x1c4));
    iVar7 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(local_24 + 0x1d4));
    if (iVar4 != iVar7) {
      cMyTrace::cMyTrace(local_3c,"bool CItemList::load_item_files()",0x957,5);
      cMyTrace::operator()(local_3c,"Stackable item set_item fail 2 (file [%s])",local_20);
      unaff_EBX = 0;
      goto LAB_08511e6e;
    }
  }
  pCVar6 = local_24;
  iVar4 = CItem::get_index((CItem *)local_24);
  iVar7 = CItem::get_grade((CItem *)local_24);
  insert_item(this,iVar7,iVar4,(CItem *)pCVar6);
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_2c,(int)&local_5c);
  goto LAB_08511e11;
LAB_08511e44:
  sync_script::DisplayMaxLength();
  unaff_EBX = 1;
  goto LAB_08511e6e;
}
```
