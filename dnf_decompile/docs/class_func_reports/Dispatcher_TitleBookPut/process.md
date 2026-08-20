# process

`_ZN23Dispatcher_TitleBookPut7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_TitleBookPut::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TitleBookPut` | `0x081d774e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d774e  _ZN23Dispatcher_TitleBookPut7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_TitleBookPut::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d774e, 0x081d7973]
081d774e +0x000:  push   %ebp
081d774f +0x001:  mov    %esp,%ebp
081d7751 +0x003:  push   %esi
081d7752 +0x004:  push   %ebx
081d7753 +0x005:  sub    $0x40,%esp
081d7756 +0x008:  mov    0x10(%ebp),%eax
081d7759 +0x00b:  mov    %eax,-0x10(%ebp)
081d775c +0x00e:  mov    0xc(%ebp),%eax
081d775f +0x011:  mov    %eax,(%esp)
081d7762 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d7767 +0x019:  cmp    $0x2,%eax
081d776a +0x01c:  setle  %al
081d776d +0x01f:  test   %al,%al
081d776f +0x021:  je     081d777b <+0x2d>
081d7771 +0x023:  mov    $0x0,%eax
081d7776 +0x028:  jmp    081d796d <+0x21f>
081d777b +0x02d:  mov    -0x10(%ebp),%eax
081d777e +0x030:  mov    0x1d(%eax),%esi
081d7781 +0x033:  mov    -0x10(%ebp),%eax
081d7784 +0x036:  mov    0x19(%eax),%eax
081d7787 +0x039:  mov    %eax,%ebx
081d7789 +0x03b:  mov    -0x10(%ebp),%eax
081d778c +0x03e:  mov    0x15(%eax),%ecx
081d778f +0x041:  mov    -0x10(%ebp),%eax
081d7792 +0x044:  mov    0x11(%eax),%edx
081d7795 +0x047:  mov    -0x10(%ebp),%eax
081d7798 +0x04a:  mov    0xd(%eax),%eax
081d779b +0x04d:  mov    %esi,0x14(%esp)
081d779f +0x051:  mov    %ebx,0x10(%esp)
081d77a3 +0x055:  mov    %ecx,0xc(%esp)
081d77a7 +0x059:  mov    %edx,0x8(%esp)
081d77ab +0x05d:  mov    %eax,0x4(%esp)
081d77af +0x061:  mov    0xc(%ebp),%eax
081d77b2 +0x064:  mov    %eax,(%esp)
081d77b5 +0x067:  call   08642058 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::putTitle(CUser*, ENUM_ITEMSPACE, int, int, ENUM_TITLE_BOOK_CATEGORY, int)
081d77ba +0x06c:  mov    %eax,-0xc(%ebp)
081d77bd +0x06f:  cmpl   $0x0,-0xc(%ebp)
081d77c1 +0x073:  je     081d788e <+0x140>
081d77c7 +0x079:  lea    -0x1c(%ebp),%eax
081d77ca +0x07c:  mov    %eax,(%esp)
081d77cd +0x07f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d77d2 +0x084:  movl   $0x19c,0x8(%esp)
081d77da +0x08c:  movl   $0x1,0x4(%esp)
081d77e2 +0x094:  lea    -0x1c(%ebp),%eax
081d77e5 +0x097:  mov    %eax,(%esp)
081d77e8 +0x09a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d77ed +0x09f:  movl   $0x0,0x4(%esp)
081d77f5 +0x0a7:  lea    -0x1c(%ebp),%eax
081d77f8 +0x0aa:  mov    %eax,(%esp)
081d77fb +0x0ad:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d7800 +0x0b2:  mov    -0xc(%ebp),%eax
081d7803 +0x0b5:  mov    %eax,0x4(%esp)
081d7807 +0x0b9:  lea    -0x1c(%ebp),%eax
081d780a +0x0bc:  mov    %eax,(%esp)
081d780d +0x0bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d7812 +0x0c4:  mov    -0x10(%ebp),%eax
081d7815 +0x0c7:  mov    0xd(%eax),%eax
081d7818 +0x0ca:  mov    %eax,0x4(%esp)
081d781c +0x0ce:  lea    -0x1c(%ebp),%eax
081d781f +0x0d1:  mov    %eax,(%esp)
081d7822 +0x0d4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d7827 +0x0d9:  mov    -0x10(%ebp),%eax
081d782a +0x0dc:  mov    0x19(%eax),%eax
081d782d +0x0df:  mov    %eax,0x4(%esp)
081d7831 +0x0e3:  lea    -0x1c(%ebp),%eax
081d7834 +0x0e6:  mov    %eax,(%esp)
081d7837 +0x0e9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d783c +0x0ee:  movl   $0x1,0x4(%esp)
081d7844 +0x0f6:  lea    -0x1c(%ebp),%eax
081d7847 +0x0f9:  mov    %eax,(%esp)
081d784a +0x0fc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d784f +0x101:  lea    -0x1c(%ebp),%eax
081d7852 +0x104:  mov    %eax,0x4(%esp)
081d7856 +0x108:  mov    0xc(%ebp),%eax
081d7859 +0x10b:  mov    %eax,(%esp)
081d785c +0x10e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d7861 +0x113:  jmp    081d787e <+0x130>
081d7863 +0x115:  mov    %edx,%ebx
081d7865 +0x117:  mov    %eax,%esi
081d7867 +0x119:  lea    -0x1c(%ebp),%eax
081d786a +0x11c:  mov    %eax,(%esp)
081d786d +0x11f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7872 +0x124:  mov    %esi,%eax
081d7874 +0x126:  mov    %ebx,%edx
081d7876 +0x128:  mov    %eax,(%esp)
081d7879 +0x12b:  call   08ae3750 <_Unwind_Resume>
081d787e +0x130:  lea    -0x1c(%ebp),%eax
081d7881 +0x133:  mov    %eax,(%esp)
081d7884 +0x136:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7889 +0x13b:  jmp    081d7968 <+0x21a>
081d788e +0x140:  lea    -0x28(%ebp),%eax
081d7891 +0x143:  mov    %eax,(%esp)
081d7894 +0x146:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d7899 +0x14b:  movl   $0x19c,0x8(%esp)
081d78a1 +0x153:  movl   $0x1,0x4(%esp)
081d78a9 +0x15b:  lea    -0x28(%ebp),%eax
081d78ac +0x15e:  mov    %eax,(%esp)
081d78af +0x161:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d78b4 +0x166:  movl   $0x1,0x4(%esp)
081d78bc +0x16e:  lea    -0x28(%ebp),%eax
081d78bf +0x171:  mov    %eax,(%esp)
081d78c2 +0x174:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d78c7 +0x179:  mov    -0x10(%ebp),%eax
081d78ca +0x17c:  mov    0xd(%eax),%eax
081d78cd +0x17f:  mov    %eax,0x4(%esp)
081d78d1 +0x183:  lea    -0x28(%ebp),%eax
081d78d4 +0x186:  mov    %eax,(%esp)
081d78d7 +0x189:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d78dc +0x18e:  mov    -0x10(%ebp),%eax
081d78df +0x191:  mov    0x11(%eax),%eax
081d78e2 +0x194:  mov    %eax,0x4(%esp)
081d78e6 +0x198:  lea    -0x28(%ebp),%eax
081d78e9 +0x19b:  mov    %eax,(%esp)
081d78ec +0x19e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d78f1 +0x1a3:  mov    -0x10(%ebp),%eax
081d78f4 +0x1a6:  mov    0x19(%eax),%eax
081d78f7 +0x1a9:  mov    %eax,0x4(%esp)
081d78fb +0x1ad:  lea    -0x28(%ebp),%eax
081d78fe +0x1b0:  mov    %eax,(%esp)
081d7901 +0x1b3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d7906 +0x1b8:  mov    -0x10(%ebp),%eax
081d7909 +0x1bb:  mov    0x1d(%eax),%eax
081d790c +0x1be:  mov    %eax,0x4(%esp)
081d7910 +0x1c2:  lea    -0x28(%ebp),%eax
081d7913 +0x1c5:  mov    %eax,(%esp)
081d7916 +0x1c8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d791b +0x1cd:  movl   $0x1,0x4(%esp)
081d7923 +0x1d5:  lea    -0x28(%ebp),%eax
081d7926 +0x1d8:  mov    %eax,(%esp)
081d7929 +0x1db:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d792e +0x1e0:  lea    -0x28(%ebp),%eax
081d7931 +0x1e3:  mov    %eax,0x4(%esp)
081d7935 +0x1e7:  mov    0xc(%ebp),%eax
081d7938 +0x1ea:  mov    %eax,(%esp)
081d793b +0x1ed:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d7940 +0x1f2:  jmp    081d795d <+0x20f>
081d7942 +0x1f4:  mov    %edx,%ebx
081d7944 +0x1f6:  mov    %eax,%esi
081d7946 +0x1f8:  lea    -0x28(%ebp),%eax
081d7949 +0x1fb:  mov    %eax,(%esp)
081d794c +0x1fe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7951 +0x203:  mov    %esi,%eax
081d7953 +0x205:  mov    %ebx,%edx
081d7955 +0x207:  mov    %eax,(%esp)
081d7958 +0x20a:  call   08ae3750 <_Unwind_Resume>
081d795d +0x20f:  lea    -0x28(%ebp),%eax
081d7960 +0x212:  mov    %eax,(%esp)
081d7963 +0x215:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7968 +0x21a:  mov    $0x0,%eax
081d796d +0x21f:  add    $0x40,%esp
081d7970 +0x222:  pop    %ebx
081d7971 +0x223:  pop    %esi
081d7972 +0x224:  pop    %ebp
081d7973 +0x225:  ret
```

## 反编译 C

```c
// Dispatcher_TitleBookPut::process @ 0x81d774e

/* Dispatcher_TitleBookPut::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_TitleBookPut::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  PacketGuard local_2c [12];
  PacketGuard local_20 [12];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = CTitleBook::putTitle
                         (param_2,*(undefined4 *)(local_14 + 0xd),*(undefined4 *)(local_14 + 0x11),
                          *(undefined4 *)(local_14 + 0x15),*(undefined4 *)(local_14 + 0x19),
                          *(undefined4 *)(local_14 + 0x1d));
    if (local_10 == 0) {
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081d78af to 081d793f has its CatchHandler @ 081d7942 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x19c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0xd));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x11));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x19));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x1d));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081d77e8 to 081d7860 has its CatchHandler @ 081d7863 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x19c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xd));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x19));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}
```
