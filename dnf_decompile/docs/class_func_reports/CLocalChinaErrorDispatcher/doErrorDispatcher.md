# doErrorDispatcher

`_ZNK26CLocalChinaErrorDispatcher17doErrorDispatcherEP5CUsert`

`CLocalChinaErrorDispatcher::doErrorDispatcher(CUser*, unsigned short) const`

| 类 | 地址 |
|---|---|
| `CLocalChinaErrorDispatcher` | `0x0812af6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812af6a  _ZNK26CLocalChinaErrorDispatcher17doErrorDispatcherEP5CUsert
#           CLocalChinaErrorDispatcher::doErrorDispatcher(CUser*, unsigned short) const
# range [0x0812af6a, 0x0812b0c7]
0812af6a +0x000:  push   %ebp
0812af6b +0x001:  mov    %esp,%ebp
0812af6d +0x003:  sub    $0x48,%esp
0812af70 +0x006:  mov    0x10(%ebp),%eax
0812af73 +0x009:  mov    %ax,-0x2c(%ebp)
0812af77 +0x00d:  cmpl   $0x0,0xc(%ebp)
0812af7b +0x011:  jne    0812af87 <+0x1d>
0812af7d +0x013:  mov    $0x0,%eax
0812af82 +0x018:  jmp    0812b0c6 <+0x15c>
0812af87 +0x01d:  movzwl -0x2c(%ebp),%eax
0812af8b +0x021:  mov    %eax,-0x18(%ebp)
0812af8e +0x024:  mov    0x8(%ebp),%edx
0812af91 +0x027:  lea    -0x1c(%ebp),%eax
0812af94 +0x02a:  lea    -0x18(%ebp),%ecx
0812af97 +0x02d:  mov    %ecx,0x8(%esp)
0812af9b +0x031:  mov    %edx,0x4(%esp)
0812af9f +0x035:  mov    %eax,(%esp)
0812afa2 +0x038:  call   0812b2c8 <_GLOBAL__I__ZN26CLocalChinaErrorDispatcherC2Ev+0x198>  ; global constructors keyed to CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher()+0x198
0812afa7 +0x03d:  sub    $0x4,%esp
0812afaa +0x040:  mov    0x8(%ebp),%edx
0812afad +0x043:  lea    -0x14(%ebp),%eax
0812afb0 +0x046:  mov    %edx,0x4(%esp)
0812afb4 +0x04a:  mov    %eax,(%esp)
0812afb7 +0x04d:  call   0812b2f4 <_GLOBAL__I__ZN26CLocalChinaErrorDispatcherC2Ev+0x1c4>  ; global constructors keyed to CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher()+0x1c4
0812afbc +0x052:  sub    $0x4,%esp
0812afbf +0x055:  lea    -0x14(%ebp),%eax
0812afc2 +0x058:  mov    %eax,0x4(%esp)
0812afc6 +0x05c:  lea    -0x1c(%ebp),%eax
0812afc9 +0x05f:  mov    %eax,(%esp)
0812afcc +0x062:  call   0812b31a <_GLOBAL__I__ZN26CLocalChinaErrorDispatcherC2Ev+0x1ea>  ; global constructors keyed to CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher()+0x1ea
0812afd1 +0x067:  test   %al,%al
0812afd3 +0x069:  je     0812afdf <+0x75>
0812afd5 +0x06b:  mov    $0x0,%eax
0812afda +0x070:  jmp    0812b0c6 <+0x15c>
0812afdf +0x075:  movl   $0x0,-0x10(%ebp)
0812afe6 +0x07c:  lea    -0x1c(%ebp),%eax
0812afe9 +0x07f:  mov    %eax,(%esp)
0812afec +0x082:  call   0812b32e <_GLOBAL__I__ZN26CLocalChinaErrorDispatcherC2Ev+0x1fe>  ; global constructors keyed to CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher()+0x1fe
0812aff1 +0x087:  add    $0x4,%eax
0812aff4 +0x08a:  mov    %eax,-0xc(%ebp)
0812aff7 +0x08d:  mov    -0xc(%ebp),%eax
0812affa +0x090:  movzbl (%eax),%eax
0812affd +0x093:  test   %al,%al
0812afff +0x095:  je     0812b02b <+0xc1>
0812b001 +0x097:  mov    -0x18(%ebp),%eax
0812b004 +0x09a:  mov    %eax,0x8(%esp)
0812b008 +0x09e:  mov    0xc(%ebp),%eax
0812b00b +0x0a1:  mov    %eax,0x4(%esp)
0812b00f +0x0a5:  mov    0x8(%ebp),%eax
0812b012 +0x0a8:  mov    %eax,(%esp)
0812b015 +0x0ab:  call   0812b0c8 <_ZNK26CLocalChinaErrorDispatcher17ProcAntiAddictionER5CUser14ENUM_CMDPACKET>  ; CLocalChinaErrorDispatcher::ProcAntiAddiction(CUser&, ENUM_CMDPACKET) const
0812b01a +0x0b0:  mov    %eax,-0x10(%ebp)
0812b01d +0x0b3:  cmpl   $0x0,-0x10(%ebp)
0812b021 +0x0b7:  je     0812b02b <+0xc1>
0812b023 +0x0b9:  mov    -0x10(%ebp),%eax
0812b026 +0x0bc:  jmp    0812b0c6 <+0x15c>
0812b02b +0x0c1:  mov    -0xc(%ebp),%eax
0812b02e +0x0c4:  movzbl 0x1(%eax),%eax
0812b032 +0x0c8:  test   %al,%al
0812b034 +0x0ca:  je     0812b05d <+0xf3>
0812b036 +0x0cc:  mov    -0x18(%ebp),%eax
0812b039 +0x0cf:  mov    %eax,0x8(%esp)
0812b03d +0x0d3:  mov    0xc(%ebp),%eax
0812b040 +0x0d6:  mov    %eax,0x4(%esp)
0812b044 +0x0da:  mov    0x8(%ebp),%eax
0812b047 +0x0dd:  mov    %eax,(%esp)
0812b04a +0x0e0:  call   0812b0d2 <_ZNK26CLocalChinaErrorDispatcher16ProcSafeModeUserER5CUser14ENUM_CMDPACKET>  ; CLocalChinaErrorDispatcher::ProcSafeModeUser(CUser&, ENUM_CMDPACKET) const
0812b04f +0x0e5:  mov    %eax,-0x10(%ebp)
0812b052 +0x0e8:  cmpl   $0x0,-0x10(%ebp)
0812b056 +0x0ec:  je     0812b05d <+0xf3>
0812b058 +0x0ee:  mov    -0x10(%ebp),%eax
0812b05b +0x0f1:  jmp    0812b0c6 <+0x15c>
0812b05d +0x0f3:  mov    -0xc(%ebp),%eax
0812b060 +0x0f6:  movzbl 0x2(%eax),%eax
0812b064 +0x0fa:  test   %al,%al
0812b066 +0x0fc:  je     0812b08f <+0x125>
0812b068 +0x0fe:  mov    -0x18(%ebp),%eax
0812b06b +0x101:  mov    %eax,0x8(%esp)
0812b06f +0x105:  mov    0xc(%ebp),%eax
0812b072 +0x108:  mov    %eax,0x4(%esp)
0812b076 +0x10c:  mov    0x8(%ebp),%eax
0812b079 +0x10f:  mov    %eax,(%esp)
0812b07c +0x112:  call   0812b0dc <_ZNK26CLocalChinaErrorDispatcher22ProcSaefModeAfterLoginER5CUser14ENUM_CMDPACKET>  ; CLocalChinaErrorDispatcher::ProcSaefModeAfterLogin(CUser&, ENUM_CMDPACKET) const
0812b081 +0x117:  mov    %eax,-0x10(%ebp)
0812b084 +0x11a:  cmpl   $0x0,-0x10(%ebp)
0812b088 +0x11e:  je     0812b08f <+0x125>
0812b08a +0x120:  mov    -0x10(%ebp),%eax
0812b08d +0x123:  jmp    0812b0c6 <+0x15c>
0812b08f +0x125:  mov    -0xc(%ebp),%eax
0812b092 +0x128:  movzbl 0x3(%eax),%eax
0812b096 +0x12c:  test   %al,%al
0812b098 +0x12e:  je     0812b0c1 <+0x157>
0812b09a +0x130:  mov    -0x18(%ebp),%eax
0812b09d +0x133:  mov    %eax,0x8(%esp)
0812b0a1 +0x137:  mov    0xc(%ebp),%eax
0812b0a4 +0x13a:  mov    %eax,0x4(%esp)
0812b0a8 +0x13e:  mov    0x8(%ebp),%eax
0812b0ab +0x141:  mov    %eax,(%esp)
0812b0ae +0x144:  call   0812b0e6 <_ZNK26CLocalChinaErrorDispatcher19ProcLockInSeriaRoomER5CUser14ENUM_CMDPACKET>  ; CLocalChinaErrorDispatcher::ProcLockInSeriaRoom(CUser&, ENUM_CMDPACKET) const
0812b0b3 +0x149:  mov    %eax,-0x10(%ebp)
0812b0b6 +0x14c:  cmpl   $0x0,-0x10(%ebp)
0812b0ba +0x150:  je     0812b0c1 <+0x157>
0812b0bc +0x152:  mov    -0x10(%ebp),%eax
0812b0bf +0x155:  jmp    0812b0c6 <+0x15c>
0812b0c1 +0x157:  mov    $0x0,%eax
0812b0c6 +0x15c:  leave
0812b0c7 +0x15d:  ret
```

## 反编译 C

```c
// CLocalChinaErrorDispatcher::doErrorDispatcher @ 0x812af6a

/* CLocalChinaErrorDispatcher::doErrorDispatcher(CUser*, unsigned short) const */

int __thiscall
CLocalChinaErrorDispatcher::doErrorDispatcher
          (CLocalChinaErrorDispatcher *this,CUser *param_1,ushort param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<ENUM_CMDPACKET_const,CLocalChinaErrorDispatcher::_PacketErrorCheck>>
  local_20 [4];
  uint local_1c;
  map<ENUM_CMDPACKET,CLocalChinaErrorDispatcher::_PacketErrorCheck,std::less<ENUM_CMDPACKET>,std::allocator<std::pair<ENUM_CMDPACKET_const,CLocalChinaErrorDispatcher::_PacketErrorCheck>>>
  local_18 [4];
  int local_14;
  char *local_10;
  
  if (param_1 == (CUser *)0x0) {
    local_14 = 0;
  }
  else {
    local_1c = (uint)param_2;
    std::
    map<ENUM_CMDPACKET,CLocalChinaErrorDispatcher::_PacketErrorCheck,std::less<ENUM_CMDPACKET>,std::allocator<std::pair<ENUM_CMDPACKET_const,CLocalChinaErrorDispatcher::_PacketErrorCheck>>>
    ::find(local_20);
    std::
    map<ENUM_CMDPACKET,CLocalChinaErrorDispatcher::_PacketErrorCheck,std::less<ENUM_CMDPACKET>,std::allocator<std::pair<ENUM_CMDPACKET_const,CLocalChinaErrorDispatcher::_PacketErrorCheck>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<ENUM_CMDPACKET_const,CLocalChinaErrorDispatcher::_PacketErrorCheck>>
            ::operator==(local_20,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') {
      local_14 = 0;
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<ENUM_CMDPACKET_const,CLocalChinaErrorDispatcher::_PacketErrorCheck>>
              ::operator->(local_20);
      local_10 = (char *)(iVar2 + 4);
      if (((((*local_10 == '\0') ||
            (local_14 = ProcAntiAddiction(this,param_1,local_1c), local_14 == 0)) &&
           ((local_10[1] == '\0' ||
            (local_14 = ProcSafeModeUser(this,param_1,local_1c), local_14 == 0)))) &&
          ((local_10[2] == '\0' ||
           (local_14 = ProcSaefModeAfterLogin(this,param_1,local_1c), local_14 == 0)))) &&
         ((local_10[3] == '\0' ||
          (local_14 = ProcLockInSeriaRoom(this,param_1,local_1c), local_14 == 0)))) {
        local_14 = 0;
      }
    }
    else {
      local_14 = 0;
    }
  }
  return local_14;
}
```
