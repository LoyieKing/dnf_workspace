# _sendCategoryData

`_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE`

`CTitleBook::_sendCategoryData(CUser*, unsigned short, ENUM_TITLE_BOOK_CATEGORY, ENUM_TITLE_BOOK_INFO_TYPE)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x086417aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086417aa  _ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE
#           CTitleBook::_sendCategoryData(CUser*, unsigned short, ENUM_TITLE_BOOK_CATEGORY, ENUM_TITLE_BOOK_INFO_TYPE)
# range [0x086417aa, 0x08641993]
086417aa +0x000:  push   %ebp
086417ab +0x001:  mov    %esp,%ebp
086417ad +0x003:  push   %esi
086417ae +0x004:  push   %ebx
086417af +0x005:  sub    $0x90,%esp
086417b5 +0x00b:  mov    0x10(%ebp),%eax
086417b8 +0x00e:  mov    %ax,-0x7c(%ebp)
086417bc +0x012:  movl   $0x4,-0x1c(%ebp)
086417c3 +0x019:  movl   $0x0,-0x20(%ebp)
086417ca +0x020:  movl   $0x0,-0x18(%ebp)
086417d1 +0x027:  lea    -0x69(%ebp),%eax
086417d4 +0x02a:  mov    %eax,(%esp)
086417d7 +0x02d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086417dc +0x032:  lea    -0x69(%ebp),%eax
086417df +0x035:  mov    %eax,(%esp)
086417e2 +0x038:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
086417e7 +0x03d:  movb   $0x0,-0x11(%ebp)
086417eb +0x041:  lea    -0x2c(%ebp),%eax
086417ee +0x044:  mov    %eax,(%esp)
086417f1 +0x047:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086417f6 +0x04c:  movl   $0x165,0x8(%esp)
086417fe +0x054:  movl   $0x0,0x4(%esp)
08641806 +0x05c:  lea    -0x2c(%ebp),%eax
08641809 +0x05f:  mov    %eax,(%esp)
0864180c +0x062:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08641811 +0x067:  mov    0x18(%ebp),%eax
08641814 +0x06a:  movsbl %al,%eax
08641817 +0x06d:  mov    %eax,0x4(%esp)
0864181b +0x071:  lea    -0x2c(%ebp),%eax
0864181e +0x074:  mov    %eax,(%esp)
08641821 +0x077:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08641826 +0x07c:  movzwl -0x7c(%ebp),%eax
0864182a +0x080:  mov    %eax,0x4(%esp)
0864182e +0x084:  lea    -0x2c(%ebp),%eax
08641831 +0x087:  mov    %eax,(%esp)
08641834 +0x08a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08641839 +0x08f:  mov    0x14(%ebp),%eax
0864183c +0x092:  mov    %eax,0x4(%esp)
08641840 +0x096:  lea    -0x2c(%ebp),%eax
08641843 +0x099:  mov    %eax,(%esp)
08641846 +0x09c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0864184b +0x0a1:  mov    0x14(%ebp),%eax
0864184e +0x0a4:  mov    %eax,0x4(%esp)
08641852 +0x0a8:  mov    0x8(%ebp),%eax
08641855 +0x0ab:  mov    %eax,(%esp)
08641858 +0x0ae:  call   08641b84 <_ZN10CTitleBook21_getCategoryItemCountE24ENUM_TITLE_BOOK_CATEGORY>  ; CTitleBook::_getCategoryItemCount(ENUM_TITLE_BOOK_CATEGORY)
0864185d +0x0b3:  mov    %eax,-0x18(%ebp)
08641860 +0x0b6:  cmpw   $0x0,-0x7c(%ebp)
08641865 +0x0bb:  je     0864189b <+0xf1>
08641867 +0x0bd:  lea    -0x69(%ebp),%eax
0864186a +0x0c0:  mov    %eax,0xc(%esp)
0864186e +0x0c4:  lea    -0x20(%ebp),%eax
08641871 +0x0c7:  mov    %eax,0x8(%esp)
08641875 +0x0cb:  lea    -0x1c(%ebp),%eax
08641878 +0x0ce:  mov    %eax,0x4(%esp)
0864187c +0x0d2:  mov    0x8(%ebp),%eax
0864187f +0x0d5:  mov    %eax,(%esp)
08641882 +0x0d8:  call   08641994 <_ZN10CTitleBook18_getOwnerTitleInfoER24ENUM_TITLE_BOOK_CATEGORYRiP10Inven_Item>  ; CTitleBook::_getOwnerTitleInfo(ENUM_TITLE_BOOK_CATEGORY&, int&, Inven_Item*)
08641887 +0x0dd:  test   %al,%al
08641889 +0x0df:  je     0864189b <+0xf1>
0864188b +0x0e1:  mov    -0x1c(%ebp),%eax
0864188e +0x0e4:  cmp    %eax,0x14(%ebp)
08641891 +0x0e7:  jne    0864189b <+0xf1>
08641893 +0x0e9:  addl   $0x1,-0x18(%ebp)
08641897 +0x0ed:  movb   $0x1,-0x11(%ebp)
0864189b +0x0f1:  mov    -0x18(%ebp),%eax
0864189e +0x0f4:  mov    %eax,0x4(%esp)
086418a2 +0x0f8:  lea    -0x2c(%ebp),%eax
086418a5 +0x0fb:  mov    %eax,(%esp)
086418a8 +0x0fe:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086418ad +0x103:  movl   $0x0,-0x10(%ebp)
086418b4 +0x10a:  jmp    08641901 <+0x157>
086418b6 +0x10c:  mov    0x14(%ebp),%edx
086418b9 +0x10f:  mov    0x8(%ebp),%eax
086418bc +0x112:  add    $0x1ad0,%edx
086418c2 +0x118:  mov    0x8(%eax,%edx,4),%edx
086418c6 +0x11c:  mov    -0x10(%ebp),%eax
086418c9 +0x11f:  imul   $0x3d,%eax,%eax
086418cc +0x122:  lea    (%edx,%eax,1),%eax
086418cf +0x125:  mov    %eax,-0xc(%ebp)
086418d2 +0x128:  mov    -0xc(%ebp),%eax
086418d5 +0x12b:  mov    0x2(%eax),%eax
086418d8 +0x12e:  test   %eax,%eax
086418da +0x130:  je     086418fd <+0x153>
086418dc +0x132:  mov    -0x10(%ebp),%eax
086418df +0x135:  cwtl
086418e0 +0x136:  mov    -0xc(%ebp),%edx
086418e3 +0x139:  mov    %edx,0xc(%esp)
086418e7 +0x13d:  mov    %eax,0x8(%esp)
086418eb +0x141:  lea    -0x2c(%ebp),%eax
086418ee +0x144:  mov    %eax,0x4(%esp)
086418f2 +0x148:  mov    0x8(%ebp),%eax
086418f5 +0x14b:  mov    %eax,(%esp)
086418f8 +0x14e:  call   08641a6a <_ZN10CTitleBook12_putItemDataER11PacketGuardsR10Inven_Item>  ; CTitleBook::_putItemData(PacketGuard&, short, Inven_Item&)
086418fd +0x153:  addl   $0x1,-0x10(%ebp)
08641901 +0x157:  mov    0x14(%ebp),%eax
08641904 +0x15a:  mov    &_ZL14TITLE_BOOK_MAX(,%eax,4),%eax
0864190b +0x161:  cmp    -0x10(%ebp),%eax
0864190e +0x164:  setg   %al
08641911 +0x167:  test   %al,%al
08641913 +0x169:  jne    086418b6 <+0x10c>
08641915 +0x16b:  cmpb   $0x0,-0x11(%ebp)
08641919 +0x16f:  je     0864193c <+0x192>
0864191b +0x171:  mov    -0x20(%ebp),%eax
0864191e +0x174:  cwtl
0864191f +0x175:  lea    -0x69(%ebp),%edx
08641922 +0x178:  mov    %edx,0xc(%esp)
08641926 +0x17c:  mov    %eax,0x8(%esp)
0864192a +0x180:  lea    -0x2c(%ebp),%eax
0864192d +0x183:  mov    %eax,0x4(%esp)
08641931 +0x187:  mov    0x8(%ebp),%eax
08641934 +0x18a:  mov    %eax,(%esp)
08641937 +0x18d:  call   08641a6a <_ZN10CTitleBook12_putItemDataER11PacketGuardsR10Inven_Item>  ; CTitleBook::_putItemData(PacketGuard&, short, Inven_Item&)
0864193c +0x192:  movl   $0x1,0x4(%esp)
08641944 +0x19a:  lea    -0x2c(%ebp),%eax
08641947 +0x19d:  mov    %eax,(%esp)
0864194a +0x1a0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0864194f +0x1a5:  lea    -0x2c(%ebp),%eax
08641952 +0x1a8:  mov    %eax,0x4(%esp)
08641956 +0x1ac:  mov    0xc(%ebp),%eax
08641959 +0x1af:  mov    %eax,(%esp)
0864195c +0x1b2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08641961 +0x1b7:  jmp    0864197e <+0x1d4>
08641963 +0x1b9:  mov    %edx,%ebx
08641965 +0x1bb:  mov    %eax,%esi
08641967 +0x1bd:  lea    -0x2c(%ebp),%eax
0864196a +0x1c0:  mov    %eax,(%esp)
0864196d +0x1c3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08641972 +0x1c8:  mov    %esi,%eax
08641974 +0x1ca:  mov    %ebx,%edx
08641976 +0x1cc:  mov    %eax,(%esp)
08641979 +0x1cf:  call   08ae3750 <_Unwind_Resume>
0864197e +0x1d4:  lea    -0x2c(%ebp),%eax
08641981 +0x1d7:  mov    %eax,(%esp)
08641984 +0x1da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08641989 +0x1df:  add    $0x90,%esp
0864198f +0x1e5:  pop    %ebx
08641990 +0x1e6:  pop    %esi
08641991 +0x1e7:  pop    %ebp
08641992 +0x1e8:  ret
08641993 +0x1e9:  nop
```

## 反编译 C

```c
// CTitleBook::_sendCategoryData @ 0x86417aa

/* CTitleBook::_sendCategoryData(CUser*, unsigned short, ENUM_TITLE_BOOK_CATEGORY,
   ENUM_TITLE_BOOK_INFO_TYPE) */

void __thiscall
CTitleBook::_sendCategoryData
          (CTitleBook *this,CUser *param_1,ushort param_2,int param_4,char param_5)

{
  char cVar1;
  Inven_Item local_6d [61];
  PacketGuard local_30 [12];
  int local_24;
  int local_20;
  int local_1c;
  char local_15;
  int local_14;
  Inven_Item *local_10;
  
  local_20 = 4;
  local_24 = 0;
  local_1c = 0;
  Inven_Item::Inven_Item(local_6d);
  Inven_Item::reset(local_6d);
  local_15 = '\0';
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0864180c to 08641960 has its CatchHandler @ 08641963 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x165);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)param_5);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(uint)param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,param_4);
  local_1c = _getCategoryItemCount(this,param_4);
  if (param_2 != 0) {
    cVar1 = _getOwnerTitleInfo(this,(ENUM_TITLE_BOOK_CATEGORY *)&local_20,&local_24,local_6d);
    if ((cVar1 != '\0') && (param_4 == local_20)) {
      local_1c = local_1c + 1;
      local_15 = '\x01';
    }
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_1c);
  for (local_14 = 0; local_14 < *(int *)(::TITLE_BOOK_MAX + param_4 * 4); local_14 = local_14 + 1) {
    local_10 = (Inven_Item *)(*(int *)(this + (param_4 + 0x1ad0) * 4 + 8) + local_14 * 0x3d);
    if (*(int *)(local_10 + 2) != 0) {
      _putItemData(this,local_30,(short)local_14,local_10);
    }
  }
  if (local_15 != '\0') {
    _putItemData(this,local_30,(short)local_24,local_6d);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}
```
