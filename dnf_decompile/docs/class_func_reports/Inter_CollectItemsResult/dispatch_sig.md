# dispatch_sig

`_ZN24Inter_CollectItemsResult12dispatch_sigEP5CUserPci`

`Inter_CollectItemsResult::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CollectItemsResult` | `0x084e770c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e770c  _ZN24Inter_CollectItemsResult12dispatch_sigEP5CUserPci
#           Inter_CollectItemsResult::dispatch_sig(CUser*, char*, int)
# range [0x084e770c, 0x084e781f]
084e770c +0x000:  push   %ebp
084e770d +0x001:  mov    %esp,%ebp
084e770f +0x003:  push   %esi
084e7710 +0x004:  push   %ebx
084e7711 +0x005:  sub    $0x40,%esp
084e7714 +0x008:  mov    0x10(%ebp),%eax
084e7717 +0x00b:  mov    %eax,-0x10(%ebp)
084e771a +0x00e:  mov    -0x10(%ebp),%eax
084e771d +0x011:  mov    0xa(%eax),%eax
084e7720 +0x014:  test   %eax,%eax
084e7722 +0x016:  je     084e7813 <+0x107>
084e7728 +0x01c:  mov    -0x10(%ebp),%eax
084e772b +0x01f:  mov    0xe(%eax),%eax
084e772e +0x022:  imul   $0x64,%eax,%eax
084e7731 +0x025:  mov    -0x10(%ebp),%edx
084e7734 +0x028:  mov    0xa(%edx),%edx
084e7737 +0x02b:  mov    %edx,-0x2c(%ebp)
084e773a +0x02e:  mov    %eax,%edx
084e773c +0x030:  sar    $0x1f,%edx
084e773f +0x033:  idivl  -0x2c(%ebp)
084e7742 +0x036:  mov    %eax,-0xc(%ebp)
084e7745 +0x039:  cmpl   $0x64,-0xc(%ebp)
084e7749 +0x03d:  jle    084e7752 <+0x46>
084e774b +0x03f:  movl   $0x64,-0xc(%ebp)
084e7752 +0x046:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084e7757 +0x04b:  mov    -0xc(%ebp),%edx
084e775a +0x04e:  mov    %edx,0x4(%esp)
084e775e +0x052:  mov    %eax,(%esp)
084e7761 +0x055:  call   084ed4a4 <_GLOBAL__I__Z7getUserj+0x4456>  ; global constructors keyed to getUser(unsigned int)+0x4456
084e7766 +0x05a:  lea    -0x1c(%ebp),%eax
084e7769 +0x05d:  mov    %eax,(%esp)
084e776c +0x060:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e7771 +0x065:  movl   $0x1a6,0x8(%esp)
084e7779 +0x06d:  movl   $0x0,0x4(%esp)
084e7781 +0x075:  lea    -0x1c(%ebp),%eax
084e7784 +0x078:  mov    %eax,(%esp)
084e7787 +0x07b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e778c +0x080:  mov    -0xc(%ebp),%eax
084e778f +0x083:  mov    %eax,0x4(%esp)
084e7793 +0x087:  lea    -0x1c(%ebp),%eax
084e7796 +0x08a:  mov    %eax,(%esp)
084e7799 +0x08d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e779e +0x092:  movl   $0x1,0x4(%esp)
084e77a6 +0x09a:  lea    -0x1c(%ebp),%eax
084e77a9 +0x09d:  mov    %eax,(%esp)
084e77ac +0x0a0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e77b1 +0x0a5:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084e77b6 +0x0aa:  mov    %eax,(%esp)
084e77b9 +0x0ad:  call   084ed48c <_GLOBAL__I__Z7getUserj+0x443e>  ; global constructors keyed to getUser(unsigned int)+0x443e
084e77be +0x0b2:  mov    %eax,%esi
084e77c0 +0x0b4:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084e77c5 +0x0b9:  mov    %eax,(%esp)
084e77c8 +0x0bc:  call   084ed480 <_GLOBAL__I__Z7getUserj+0x4432>  ; global constructors keyed to getUser(unsigned int)+0x4432
084e77cd +0x0c1:  mov    %eax,%ebx
084e77cf +0x0c3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e77d4 +0x0c8:  lea    -0x1c(%ebp),%edx
084e77d7 +0x0cb:  mov    %edx,0xc(%esp)
084e77db +0x0cf:  mov    %esi,0x8(%esp)
084e77df +0x0d3:  mov    %ebx,0x4(%esp)
084e77e3 +0x0d7:  mov    %eax,(%esp)
084e77e6 +0x0da:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
084e77eb +0x0df:  jmp    084e7808 <+0xfc>
084e77ed +0x0e1:  mov    %edx,%ebx
084e77ef +0x0e3:  mov    %eax,%esi
084e77f1 +0x0e5:  lea    -0x1c(%ebp),%eax
084e77f4 +0x0e8:  mov    %eax,(%esp)
084e77f7 +0x0eb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e77fc +0x0f0:  mov    %esi,%eax
084e77fe +0x0f2:  mov    %ebx,%edx
084e7800 +0x0f4:  mov    %eax,(%esp)
084e7803 +0x0f7:  call   08ae3750 <_Unwind_Resume>
084e7808 +0x0fc:  lea    -0x1c(%ebp),%eax
084e780b +0x0ff:  mov    %eax,(%esp)
084e780e +0x102:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e7813 +0x107:  mov    $0x0,%eax
084e7818 +0x10c:  add    $0x40,%esp
084e781b +0x10f:  pop    %ebx
084e781c +0x110:  pop    %esi
084e781d +0x111:  pop    %ebp
084e781e +0x112:  ret
084e781f +0x113:  nop
```

## 反编译 C

```c
// Inter_CollectItemsResult::dispatch_sig @ 0x84e770c

/* Inter_CollectItemsResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CollectItemsResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  if (*(int *)(param_3 + 10) != 0) {
    local_10 = (*(int *)(param_3 + 0xe) * 100) / *(int *)(param_3 + 10);
    if (100 < local_10) {
      local_10 = 100;
    }
    CTimeGate::SetLevel(GlobalData::s_timeGate_,local_10);
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e7787 to 084e77ea has its CatchHandler @ 084e77ed */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x1a6);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    iVar1 = CTimeGate::getAreaIndex(GlobalData::s_timeGate_);
    iVar2 = CTimeGate::getVillageIndex(GlobalData::s_timeGate_);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(this,iVar2,iVar1,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
