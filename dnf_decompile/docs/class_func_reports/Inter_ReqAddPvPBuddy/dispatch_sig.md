# dispatch_sig

`_ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci`

`Inter_ReqAddPvPBuddy::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReqAddPvPBuddy` | `0x084e1832` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e1832  _ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci
#           Inter_ReqAddPvPBuddy::dispatch_sig(CUser*, char*, int)
# range [0x084e1832, 0x084e1977]
084e1832 +0x000:  push   %ebp
084e1833 +0x001:  mov    %esp,%ebp
084e1835 +0x003:  push   %esi
084e1836 +0x004:  push   %ebx
084e1837 +0x005:  sub    $0x30,%esp
084e183a +0x008:  mov    0x10(%ebp),%eax
084e183d +0x00b:  mov    %eax,-0x10(%ebp)
084e1840 +0x00e:  mov    0xc(%ebp),%eax
084e1843 +0x011:  mov    %eax,(%esp)
084e1846 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e184b +0x019:  cmp    $0x2,%eax
084e184e +0x01c:  jle    084e1860 <+0x2e>
084e1850 +0x01e:  mov    0xc(%ebp),%eax
084e1853 +0x021:  mov    %eax,(%esp)
084e1856 +0x024:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e185b +0x029:  cmp    $0x7,%eax
084e185e +0x02c:  jne    084e1867 <+0x35>
084e1860 +0x02e:  mov    $0x1,%eax
084e1865 +0x033:  jmp    084e186c <+0x3a>
084e1867 +0x035:  mov    $0x0,%eax
084e186c +0x03a:  test   %al,%al
084e186e +0x03c:  je     084e187a <+0x48>
084e1870 +0x03e:  mov    $0x0,%ebx
084e1875 +0x043:  jmp    084e196e <+0x13c>
084e187a +0x048:  mov    -0x10(%ebp),%eax
084e187d +0x04b:  mov    0xa(%eax),%ebx
084e1880 +0x04e:  mov    0xc(%ebp),%eax
084e1883 +0x051:  mov    %eax,(%esp)
084e1886 +0x054:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e188b +0x059:  cmp    %eax,%ebx
084e188d +0x05b:  setne  %al
084e1890 +0x05e:  test   %al,%al
084e1892 +0x060:  je     084e189e <+0x6c>
084e1894 +0x062:  mov    $0x0,%ebx
084e1899 +0x067:  jmp    084e196e <+0x13c>
084e189e +0x06c:  lea    -0x1c(%ebp),%eax
084e18a1 +0x06f:  mov    %eax,(%esp)
084e18a4 +0x072:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e18a9 +0x077:  movl   $0x10c,0x8(%esp)
084e18b1 +0x07f:  movl   $0x0,0x4(%esp)
084e18b9 +0x087:  lea    -0x1c(%ebp),%eax
084e18bc +0x08a:  mov    %eax,(%esp)
084e18bf +0x08d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e18c4 +0x092:  mov    -0x10(%ebp),%eax
084e18c7 +0x095:  movzbl 0x12(%eax),%eax
084e18cb +0x099:  movsbl %al,%eax
084e18ce +0x09c:  mov    %eax,0x4(%esp)
084e18d2 +0x0a0:  lea    -0x1c(%ebp),%eax
084e18d5 +0x0a3:  mov    %eax,(%esp)
084e18d8 +0x0a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e18dd +0x0ab:  mov    -0x10(%ebp),%eax
084e18e0 +0x0ae:  add    $0x13,%eax
084e18e3 +0x0b1:  mov    %eax,(%esp)
084e18e6 +0x0b4:  call   0807e3b0 <_init+0xca8>
084e18eb +0x0b9:  mov    %eax,-0xc(%ebp)
084e18ee +0x0bc:  mov    -0xc(%ebp),%eax
084e18f1 +0x0bf:  mov    %eax,0x4(%esp)
084e18f5 +0x0c3:  lea    -0x1c(%ebp),%eax
084e18f8 +0x0c6:  mov    %eax,(%esp)
084e18fb +0x0c9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e1900 +0x0ce:  mov    -0x10(%ebp),%eax
084e1903 +0x0d1:  lea    0x13(%eax),%edx
084e1906 +0x0d4:  mov    -0xc(%ebp),%eax
084e1909 +0x0d7:  mov    %eax,0x8(%esp)
084e190d +0x0db:  mov    %edx,0x4(%esp)
084e1911 +0x0df:  lea    -0x1c(%ebp),%eax
084e1914 +0x0e2:  mov    %eax,(%esp)
084e1917 +0x0e5:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e191c +0x0ea:  movl   $0x1,0x4(%esp)
084e1924 +0x0f2:  lea    -0x1c(%ebp),%eax
084e1927 +0x0f5:  mov    %eax,(%esp)
084e192a +0x0f8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e192f +0x0fd:  lea    -0x1c(%ebp),%eax
084e1932 +0x100:  mov    %eax,0x4(%esp)
084e1936 +0x104:  mov    0xc(%ebp),%eax
084e1939 +0x107:  mov    %eax,(%esp)
084e193c +0x10a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e1941 +0x10f:  mov    $0x0,%ebx
084e1946 +0x114:  lea    -0x1c(%ebp),%eax
084e1949 +0x117:  mov    %eax,(%esp)
084e194c +0x11a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1951 +0x11f:  jmp    084e196e <+0x13c>
084e1953 +0x121:  mov    %edx,%ebx
084e1955 +0x123:  mov    %eax,%esi
084e1957 +0x125:  lea    -0x1c(%ebp),%eax
084e195a +0x128:  mov    %eax,(%esp)
084e195d +0x12b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1962 +0x130:  mov    %esi,%eax
084e1964 +0x132:  mov    %ebx,%edx
084e1966 +0x134:  mov    %eax,(%esp)
084e1969 +0x137:  call   08ae3750 <_Unwind_Resume>
084e196e +0x13c:  mov    %ebx,%eax
084e1970 +0x13e:  add    $0x30,%esp
084e1973 +0x141:  pop    %ebx
084e1974 +0x142:  pop    %esi
084e1975 +0x143:  pop    %ebp
084e1976 +0x144:  ret
084e1977 +0x145:  nop
```

## 反编译 C

```c
// Inter_ReqAddPvPBuddy::dispatch_sig @ 0x84e1832

/* Inter_ReqAddPvPBuddy::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqAddPvPBuddy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 < 3) || (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 7)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((!bVar1) &&
     (iVar2 = *(int *)(local_14 + 10),
     iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar2 == iVar3)) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e18bf to 084e1940 has its CatchHandler @ 084e1953 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x10c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x12));
    local_10 = strlen((char *)(local_14 + 0x13));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x13),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
