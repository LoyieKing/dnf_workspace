# dispatch

`_ZN16DB_SaveEventItem8dispatchEiiP6Stream`

`DB_SaveEventItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveEventItem` | `0x0841a7e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a7e4  _ZN16DB_SaveEventItem8dispatchEiiP6Stream
#           DB_SaveEventItem::dispatch(int, int, Stream*)
# range [0x0841a7e4, 0x0841ab2f]
0841a7e4 +0x000:  push   %ebp
0841a7e5 +0x001:  mov    %esp,%ebp
0841a7e7 +0x003:  push   %ebx
0841a7e8 +0x004:  sub    $0x24,%esp
0841a7eb +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841a7f0 +0x00c:  movl   $0x0,0x8(%esp)
0841a7f8 +0x014:  movl   $0x3,0x4(%esp)
0841a800 +0x01c:  mov    %eax,(%esp)
0841a803 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841a808 +0x024:  mov    %eax,-0x18(%ebp)
0841a80b +0x027:  mov    0x14(%ebp),%eax
0841a80e +0x02a:  mov    %eax,(%esp)
0841a811 +0x02d:  call   0845101c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3c32>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3c32
0841a816 +0x032:  mov    %eax,-0x14(%ebp)
0841a819 +0x035:  mov    -0x14(%ebp),%eax
0841a81c +0x038:  mov    0x14(%eax),%eax
0841a81f +0x03b:  test   %eax,%eax
0841a821 +0x03d:  je     0841aa97 <+0x2b3>
0841a827 +0x043:  movb   $0x0,-0x9(%ebp)
0841a82b +0x047:  mov    -0x14(%ebp),%eax
0841a82e +0x04a:  mov    0x8(%eax),%eax
0841a831 +0x04d:  cmp    $0x1,%eax
0841a834 +0x050:  jne    0841a88e <+0xaa>
0841a836 +0x052:  mov    -0x14(%ebp),%eax
0841a839 +0x055:  mov    0xc(%eax),%eax
0841a83c +0x058:  mov    %eax,%edx
0841a83e +0x05a:  mov    -0x14(%ebp),%eax
0841a841 +0x05d:  mov    0x14(%eax),%eax
0841a844 +0x060:  mov    %edx,0x8(%esp)
0841a848 +0x064:  mov    %eax,0x4(%esp)
0841a84c +0x068:  mov    0x8(%ebp),%eax
0841a84f +0x06b:  mov    %eax,(%esp)
0841a852 +0x06e:  call   0841a51a <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii>  ; DB_SaveEventItem::_CheckAlreadyGetYegamItem(int, int)
0841a857 +0x073:  test   %al,%al
0841a859 +0x075:  je     0841a865 <+0x81>
0841a85b +0x077:  mov    $0x0,%eax
0841a860 +0x07c:  jmp    0841ab2a <+0x346>
0841a865 +0x081:  mov    -0x14(%ebp),%eax
0841a868 +0x084:  mov    0xc(%eax),%eax
0841a86b +0x087:  mov    %eax,%edx
0841a86d +0x089:  mov    -0x14(%ebp),%eax
0841a870 +0x08c:  mov    0x14(%eax),%eax
0841a873 +0x08f:  mov    %edx,0x8(%esp)
0841a877 +0x093:  mov    %eax,0x4(%esp)
0841a87b +0x097:  mov    0x8(%ebp),%eax
0841a87e +0x09a:  mov    %eax,(%esp)
0841a881 +0x09d:  call   0841a5ea <_ZN16DB_SaveEventItem21_UpdateEventYegamInfoEii>  ; DB_SaveEventItem::_UpdateEventYegamInfo(int, int)
0841a886 +0x0a2:  mov    %al,-0x9(%ebp)
0841a889 +0x0a5:  jmp    0841aa82 <+0x29e>
0841a88e +0x0aa:  mov    -0x14(%ebp),%eax
0841a891 +0x0ad:  mov    0x8(%eax),%eax
0841a894 +0x0b0:  cmp    $0x2,%eax
0841a897 +0x0b3:  jne    0841a8e3 <+0xff>
0841a899 +0x0b5:  mov    -0x14(%ebp),%eax
0841a89c +0x0b8:  mov    0xc(%eax),%eax
0841a89f +0x0bb:  mov    %eax,%edx
0841a8a1 +0x0bd:  mov    -0x14(%ebp),%eax
0841a8a4 +0x0c0:  mov    0x14(%eax),%eax
0841a8a7 +0x0c3:  mov    %edx,0x4(%esp)
0841a8ab +0x0c7:  mov    %eax,(%esp)
0841a8ae +0x0ca:  call   083f9f2e <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji>  ; WongWork::EventATI::CheckAlreadyGetATIItem(unsigned int, int)
0841a8b3 +0x0cf:  test   %al,%al
0841a8b5 +0x0d1:  je     0841a8c1 <+0xdd>
0841a8b7 +0x0d3:  mov    $0x0,%eax
0841a8bc +0x0d8:  jmp    0841ab2a <+0x346>
0841a8c1 +0x0dd:  mov    -0x14(%ebp),%eax
0841a8c4 +0x0e0:  mov    0xc(%eax),%eax
0841a8c7 +0x0e3:  mov    %eax,%edx
0841a8c9 +0x0e5:  mov    -0x14(%ebp),%eax
0841a8cc +0x0e8:  mov    0x14(%eax),%eax
0841a8cf +0x0eb:  mov    %edx,0x4(%esp)
0841a8d3 +0x0ef:  mov    %eax,(%esp)
0841a8d6 +0x0f2:  call   083fa0ad <_ZN8WongWork8EventATI18UpdateEventATIInfoEji>  ; WongWork::EventATI::UpdateEventATIInfo(unsigned int, int)
0841a8db +0x0f7:  mov    %al,-0x9(%ebp)
0841a8de +0x0fa:  jmp    0841aa82 <+0x29e>
0841a8e3 +0x0ff:  mov    -0x14(%ebp),%eax
0841a8e6 +0x102:  mov    0x8(%eax),%eax
0841a8e9 +0x105:  cmp    $0x3,%eax
0841a8ec +0x108:  jne    0841a938 <+0x154>
0841a8ee +0x10a:  mov    -0x14(%ebp),%eax
0841a8f1 +0x10d:  mov    0xc(%eax),%eax
0841a8f4 +0x110:  mov    %eax,%edx
0841a8f6 +0x112:  mov    -0x14(%ebp),%eax
0841a8f9 +0x115:  mov    0x14(%eax),%eax
0841a8fc +0x118:  mov    %edx,0x4(%esp)
0841a900 +0x11c:  mov    %eax,(%esp)
0841a903 +0x11f:  call   083fa69c <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji>  ; WongWork::EventSigong::CheckAlreadyGetSigongItem(unsigned int, int)
0841a908 +0x124:  test   %al,%al
0841a90a +0x126:  je     0841a916 <+0x132>
0841a90c +0x128:  mov    $0x0,%eax
0841a911 +0x12d:  jmp    0841ab2a <+0x346>
0841a916 +0x132:  mov    -0x14(%ebp),%eax
0841a919 +0x135:  mov    0xc(%eax),%eax
0841a91c +0x138:  mov    %eax,%edx
0841a91e +0x13a:  mov    -0x14(%ebp),%eax
0841a921 +0x13d:  mov    0x14(%eax),%eax
0841a924 +0x140:  mov    %edx,0x4(%esp)
0841a928 +0x144:  mov    %eax,(%esp)
0841a92b +0x147:  call   083fa7a5 <_ZN8WongWork11EventSigong21UpdateEventSigongInfoEji>  ; WongWork::EventSigong::UpdateEventSigongInfo(unsigned int, int)
0841a930 +0x14c:  mov    %al,-0x9(%ebp)
0841a933 +0x14f:  jmp    0841aa82 <+0x29e>
0841a938 +0x154:  mov    -0x14(%ebp),%eax
0841a93b +0x157:  mov    0x8(%eax),%eax
0841a93e +0x15a:  cmp    $0x4,%eax
0841a941 +0x15d:  jne    0841a98d <+0x1a9>
0841a943 +0x15f:  mov    -0x14(%ebp),%eax
0841a946 +0x162:  mov    0xc(%eax),%eax
0841a949 +0x165:  mov    %eax,%edx
0841a94b +0x167:  mov    -0x14(%ebp),%eax
0841a94e +0x16a:  mov    0x14(%eax),%eax
0841a951 +0x16d:  mov    %edx,0x4(%esp)
0841a955 +0x171:  mov    %eax,(%esp)
0841a958 +0x174:  call   083fac0d <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji>  ; WongWork::EventEverland::CheckAlreadyGetEverlandItem(unsigned int, int)
0841a95d +0x179:  test   %al,%al
0841a95f +0x17b:  je     0841a96b <+0x187>
0841a961 +0x17d:  mov    $0x0,%eax
0841a966 +0x182:  jmp    0841ab2a <+0x346>
0841a96b +0x187:  mov    -0x14(%ebp),%eax
0841a96e +0x18a:  mov    0xc(%eax),%eax
0841a971 +0x18d:  mov    %eax,%edx
0841a973 +0x18f:  mov    -0x14(%ebp),%eax
0841a976 +0x192:  mov    0x14(%eax),%eax
0841a979 +0x195:  mov    %edx,0x4(%esp)
0841a97d +0x199:  mov    %eax,(%esp)
0841a980 +0x19c:  call   083face3 <_ZN8WongWork13EventEverland23UpdateEventEverlandInfoEji>  ; WongWork::EventEverland::UpdateEventEverlandInfo(unsigned int, int)
0841a985 +0x1a1:  mov    %al,-0x9(%ebp)
0841a988 +0x1a4:  jmp    0841aa82 <+0x29e>
0841a98d +0x1a9:  mov    -0x14(%ebp),%eax
0841a990 +0x1ac:  mov    0x8(%eax),%eax
0841a993 +0x1af:  cmp    $0x5,%eax
0841a996 +0x1b2:  jne    0841a9e2 <+0x1fe>
0841a998 +0x1b4:  mov    -0x14(%ebp),%eax
0841a99b +0x1b7:  mov    0xc(%eax),%eax
0841a99e +0x1ba:  mov    %eax,%edx
0841a9a0 +0x1bc:  mov    -0x14(%ebp),%eax
0841a9a3 +0x1bf:  mov    0x14(%eax),%eax
0841a9a6 +0x1c2:  mov    %edx,0x4(%esp)
0841a9aa +0x1c6:  mov    %eax,(%esp)
0841a9ad +0x1c9:  call   083fb047 <_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji>  ; WongWork::EventMuz::CheckAlreadyGetMuzItem(unsigned int, int)
0841a9b2 +0x1ce:  test   %al,%al
0841a9b4 +0x1d0:  je     0841a9c0 <+0x1dc>
0841a9b6 +0x1d2:  mov    $0x0,%eax
0841a9bb +0x1d7:  jmp    0841ab2a <+0x346>
0841a9c0 +0x1dc:  mov    -0x14(%ebp),%eax
0841a9c3 +0x1df:  mov    0xc(%eax),%eax
0841a9c6 +0x1e2:  mov    %eax,%edx
0841a9c8 +0x1e4:  mov    -0x14(%ebp),%eax
0841a9cb +0x1e7:  mov    0x14(%eax),%eax
0841a9ce +0x1ea:  mov    %edx,0x4(%esp)
0841a9d2 +0x1ee:  mov    %eax,(%esp)
0841a9d5 +0x1f1:  call   083fb105 <_ZN8WongWork8EventMuz18UpdateEventMuzInfoEji>  ; WongWork::EventMuz::UpdateEventMuzInfo(unsigned int, int)
0841a9da +0x1f6:  mov    %al,-0x9(%ebp)
0841a9dd +0x1f9:  jmp    0841aa82 <+0x29e>
0841a9e2 +0x1fe:  mov    -0x14(%ebp),%eax
0841a9e5 +0x201:  mov    0x8(%eax),%eax
0841a9e8 +0x204:  cmp    $0x6,%eax
0841a9eb +0x207:  jne    0841aa32 <+0x24e>
0841a9ed +0x209:  mov    -0x14(%ebp),%eax
0841a9f0 +0x20c:  mov    0xc(%eax),%eax
0841a9f3 +0x20f:  mov    %eax,%edx
0841a9f5 +0x211:  mov    -0x14(%ebp),%eax
0841a9f8 +0x214:  mov    (%eax),%eax
0841a9fa +0x216:  mov    %edx,0x4(%esp)
0841a9fe +0x21a:  mov    %eax,(%esp)
0841aa01 +0x21d:  call   083fb472 <_ZN8WongWork11EventAlttle25CheckAlreadyGetAlttleItemEji>  ; WongWork::EventAlttle::CheckAlreadyGetAlttleItem(unsigned int, int)
0841aa06 +0x222:  test   %al,%al
0841aa08 +0x224:  je     0841aa14 <+0x230>
0841aa0a +0x226:  mov    $0x0,%eax
0841aa0f +0x22b:  jmp    0841ab2a <+0x346>
0841aa14 +0x230:  mov    -0x14(%ebp),%eax
0841aa17 +0x233:  mov    0xc(%eax),%eax
0841aa1a +0x236:  mov    %eax,%edx
0841aa1c +0x238:  mov    -0x14(%ebp),%eax
0841aa1f +0x23b:  mov    (%eax),%eax
0841aa21 +0x23d:  mov    %edx,0x4(%esp)
0841aa25 +0x241:  mov    %eax,(%esp)
0841aa28 +0x244:  call   083fb530 <_ZN8WongWork11EventAlttle21UpdateEventAlttleInfoEji>  ; WongWork::EventAlttle::UpdateEventAlttleInfo(unsigned int, int)
0841aa2d +0x249:  mov    %al,-0x9(%ebp)
0841aa30 +0x24c:  jmp    0841aa82 <+0x29e>
0841aa32 +0x24e:  mov    -0x14(%ebp),%eax
0841aa35 +0x251:  mov    0x8(%eax),%eax
0841aa38 +0x254:  cmp    $0x7,%eax
0841aa3b +0x257:  jne    0841aa82 <+0x29e>
0841aa3d +0x259:  mov    -0x14(%ebp),%eax
0841aa40 +0x25c:  mov    0xc(%eax),%eax
0841aa43 +0x25f:  mov    %eax,%edx
0841aa45 +0x261:  mov    -0x14(%ebp),%eax
0841aa48 +0x264:  mov    0x14(%eax),%eax
0841aa4b +0x267:  mov    %edx,0x4(%esp)
0841aa4f +0x26b:  mov    %eax,(%esp)
0841aa52 +0x26e:  call   083fb883 <_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji>  ; WongWork::EventFCCombo::CheckAlreadyFCComboEventItem(unsigned int, int)
0841aa57 +0x273:  test   %al,%al
0841aa59 +0x275:  je     0841aa65 <+0x281>
0841aa5b +0x277:  mov    $0x0,%eax
0841aa60 +0x27c:  jmp    0841ab2a <+0x346>
0841aa65 +0x281:  mov    -0x14(%ebp),%eax
0841aa68 +0x284:  mov    0xc(%eax),%eax
0841aa6b +0x287:  mov    %eax,%edx
0841aa6d +0x289:  mov    -0x14(%ebp),%eax
0841aa70 +0x28c:  mov    0x14(%eax),%eax
0841aa73 +0x28f:  mov    %edx,0x4(%esp)
0841aa77 +0x293:  mov    %eax,(%esp)
0841aa7a +0x296:  call   083fb929 <_ZN8WongWork12EventFCCombo22UpdateFCComboEventInfoEji>  ; WongWork::EventFCCombo::UpdateFCComboEventInfo(unsigned int, int)
0841aa7f +0x29b:  mov    %al,-0x9(%ebp)
0841aa82 +0x29e:  movzbl -0x9(%ebp),%eax
0841aa86 +0x2a2:  xor    $0x1,%eax
0841aa89 +0x2a5:  test   %al,%al
0841aa8b +0x2a7:  je     0841aa97 <+0x2b3>
0841aa8d +0x2a9:  mov    $0x0,%eax
0841aa92 +0x2ae:  jmp    0841ab2a <+0x346>
0841aa97 +0x2b3:  mov    -0x14(%ebp),%eax
0841aa9a +0x2b6:  mov    %eax,0x4(%esp)
0841aa9e +0x2ba:  mov    0x8(%ebp),%eax
0841aaa1 +0x2bd:  mov    %eax,(%esp)
0841aaa4 +0x2c0:  call   0841a662 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM>  ; DB_SaveEventItem::_HardCodeEventItems(SIG_SAVE_EVENTITEM*)
0841aaa9 +0x2c5:  test   %al,%al
0841aaab +0x2c7:  je     0841aab4 <+0x2d0>
0841aaad +0x2c9:  mov    $0x1,%eax
0841aab2 +0x2ce:  jmp    0841ab2a <+0x346>
0841aab4 +0x2d0:  mov    -0x14(%ebp),%eax
0841aab7 +0x2d3:  movzbl 0x18(%eax),%eax
0841aabb +0x2d7:  test   %al,%al
0841aabd +0x2d9:  je     0841aac6 <+0x2e2>
0841aabf +0x2db:  mov    $0x1,%eax
0841aac4 +0x2e0:  jmp    0841ab2a <+0x346>
0841aac6 +0x2e2:  movl   $0x0,-0x10(%ebp)
0841aacd +0x2e9:  mov    -0x14(%ebp),%eax
0841aad0 +0x2ec:  mov    0x8(%eax),%ebx
0841aad3 +0x2ef:  mov    -0x14(%ebp),%eax
0841aad6 +0x2f2:  mov    0x10(%eax),%ecx
0841aad9 +0x2f5:  mov    -0x14(%ebp),%eax
0841aadc +0x2f8:  mov    0xc(%eax),%edx
0841aadf +0x2fb:  mov    -0x14(%ebp),%eax
0841aae2 +0x2fe:  mov    0x4(%eax),%eax
0841aae5 +0x301:  mov    %ebx,0xc(%esp)
0841aae9 +0x305:  mov    %ecx,0x8(%esp)
0841aaed +0x309:  mov    %edx,0x4(%esp)
0841aaf1 +0x30d:  mov    %eax,(%esp)
0841aaf4 +0x310:  call   083f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>  ; WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)
0841aaf9 +0x315:  mov    %eax,-0x10(%ebp)
0841aafc +0x318:  cmpl   $0x0,-0x10(%ebp)
0841ab00 +0x31c:  setne  %al
0841ab03 +0x31f:  test   %al,%al
0841ab05 +0x321:  je     0841ab25 <+0x341>
0841ab07 +0x323:  mov    -0x14(%ebp),%eax
0841ab0a +0x326:  mov    0x4(%eax),%edx
0841ab0d +0x329:  mov    -0x14(%ebp),%eax
0841ab10 +0x32c:  mov    (%eax),%eax
0841ab12 +0x32e:  mov    -0x10(%ebp),%ecx
0841ab15 +0x331:  mov    %ecx,0x8(%esp)
0841ab19 +0x335:  mov    %edx,0x4(%esp)
0841ab1d +0x339:  mov    %eax,(%esp)
0841ab20 +0x33c:  call   083f9c7b <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj>  ; WongWork::EventCommon::LoadCharacEventItem(unsigned int, unsigned int, unsigned int)
0841ab25 +0x341:  mov    $0x1,%eax
0841ab2a +0x346:  add    $0x24,%esp
0841ab2d +0x349:  pop    %ebx
0841ab2e +0x34a:  pop    %ebp
0841ab2f +0x34b:  ret
```

## 反编译 C

```c
// DB_SaveEventItem::dispatch @ 0x841a7e4

/* DB_SaveEventItem::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveEventItem::dispatch(DB_SaveEventItem *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_EVENTITEM *pSVar2;
  uint uVar3;
  char local_d;
  
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_EVENTITEM>(param_3);
  if (*(int *)(pSVar2 + 0x14) != 0) {
    local_d = '\0';
    if (*(int *)(pSVar2 + 8) == 1) {
      cVar1 = _CheckAlreadyGetYegamItem(this,*(int *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = _UpdateEventYegamInfo(this,*(int *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 2) {
      cVar1 = WongWork::EventATI::CheckAlreadyGetATIItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventATI::UpdateEventATIInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 3) {
      cVar1 = WongWork::EventSigong::CheckAlreadyGetSigongItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventSigong::UpdateEventSigongInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 4) {
      cVar1 = WongWork::EventEverland::CheckAlreadyGetEverlandItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventEverland::UpdateEventEverlandInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 5) {
      cVar1 = WongWork::EventMuz::CheckAlreadyGetMuzItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventMuz::UpdateEventMuzInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 6) {
      cVar1 = WongWork::EventAlttle::CheckAlreadyGetAlttleItem
                        (*(uint *)pSVar2,*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventAlttle::UpdateEventAlttleInfo(*(uint *)pSVar2,*(int *)(pSVar2 + 0xc))
      ;
    }
    else if (*(int *)(pSVar2 + 8) == 7) {
      cVar1 = WongWork::EventFCCombo::CheckAlreadyFCComboEventItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventFCCombo::UpdateFCComboEventInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    if (local_d != '\x01') {
      return 0;
    }
  }
  cVar1 = _HardCodeEventItems(this,pSVar2);
  if (((cVar1 == '\0') && (pSVar2[0x18] == (SIG_SAVE_EVENTITEM)0x0)) &&
     (uVar3 = WongWork::EventCommon::InsertEventItem2EventTable
                        (*(uint *)(pSVar2 + 4),*(uint *)(pSVar2 + 0xc),*(uint *)(pSVar2 + 0x10),
                         *(uint *)(pSVar2 + 8)), uVar3 != 0)) {
    WongWork::EventCommon::LoadCharacEventItem(*(uint *)pSVar2,*(uint *)(pSVar2 + 4),uVar3);
  }
  return 1;
}
```
