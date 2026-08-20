# check_error

`_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildCargoMoveItem::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoMoveItem` | `0x081d18dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d18dc  _ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildCargoMoveItem::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d18dc, 0x081d1953]
081d18dc +0x00:  push   %ebp
081d18dd +0x01:  mov    %esp,%ebp
081d18df +0x03:  sub    $0x18,%esp
081d18e2 +0x06:  mov    0xc(%ebp),%eax
081d18e5 +0x09:  mov    %eax,(%esp)
081d18e8 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d18ed +0x11:  cmp    $0x3,%eax
081d18f0 +0x14:  jne    081d1901 <+0x25>
081d18f2 +0x16:  mov    0xc(%ebp),%eax
081d18f5 +0x19:  mov    %eax,(%esp)
081d18f8 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d18fd +0x21:  test   %eax,%eax
081d18ff +0x23:  jne    081d1908 <+0x2c>
081d1901 +0x25:  mov    $0x1,%eax
081d1906 +0x2a:  jmp    081d190d <+0x31>
081d1908 +0x2c:  mov    $0x0,%eax
081d190d +0x31:  test   %al,%al
081d190f +0x33:  je     081d1918 <+0x3c>
081d1911 +0x35:  mov    $0xffffffff,%eax
081d1916 +0x3a:  jmp    081d1951 <+0x75>
081d1918 +0x3c:  mov    0xc(%ebp),%eax
081d191b +0x3f:  mov    %eax,(%esp)
081d191e +0x42:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d1923 +0x47:  test   %eax,%eax
081d1925 +0x49:  sete   %al
081d1928 +0x4c:  test   %al,%al
081d192a +0x4e:  je     081d1933 <+0x57>
081d192c +0x50:  mov    $0x64,%eax
081d1931 +0x55:  jmp    081d1951 <+0x75>
081d1933 +0x57:  mov    0xc(%ebp),%eax
081d1936 +0x5a:  mov    %eax,(%esp)
081d1939 +0x5d:  call   082301d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5882>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5882
081d193e +0x62:  xor    $0x1,%eax
081d1941 +0x65:  test   %al,%al
081d1943 +0x67:  je     081d194c <+0x70>
081d1945 +0x69:  mov    $0xb5,%eax
081d194a +0x6e:  jmp    081d1951 <+0x75>
081d194c +0x70:  mov    $0x0,%eax
081d1951 +0x75:  leave
081d1952 +0x76:  ret
081d1953 +0x77:  nop
```

## 反编译 C

```c
// Dispatcher_GuildCargoMoveItem::check_error @ 0x81d18dc

/* Dispatcher_GuildCargoMoveItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_GuildCargoMoveItem::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_081d190d;
    }
  }
  bVar1 = true;
LAB_081d190d:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar4 = 100;
    }
    else {
      cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
      if (cVar2 == '\x01') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0xb5;
      }
    }
  }
  return uVar4;
}
```
