# dispatch_sig

`_ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf`

`APSystem::Dispatcher_GetTodayReward::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `APSystem::Dispatcher_GetTodayReward` | `0x081251da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081251da  _ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf
#           APSystem::Dispatcher_GetTodayReward::dispatch_sig(CUser*, PacketBuf&)
# range [0x081251da, 0x0812525c]
081251da +0x00:  push   %ebp
081251db +0x01:  mov    %esp,%ebp
081251dd +0x03:  sub    $0x28,%esp
081251e0 +0x06:  cmpl   $0x0,0xc(%ebp)
081251e4 +0x0a:  je     08125205 <+0x2b>
081251e6 +0x0c:  mov    0xc(%ebp),%eax
081251e9 +0x0f:  mov    %eax,(%esp)
081251ec +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081251f1 +0x17:  cmp    $0x2,%eax
081251f4 +0x1a:  jle    08125205 <+0x2b>
081251f6 +0x1c:  mov    0xc(%ebp),%eax
081251f9 +0x1f:  mov    %eax,(%esp)
081251fc +0x22:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08125201 +0x27:  test   %eax,%eax
08125203 +0x29:  jne    0812520c <+0x32>
08125205 +0x2b:  mov    $0x1,%eax
0812520a +0x30:  jmp    08125211 <+0x37>
0812520c +0x32:  mov    $0x0,%eax
08125211 +0x37:  test   %al,%al
08125213 +0x39:  je     0812521c <+0x42>
08125215 +0x3b:  mov    $0x287,%eax
0812521a +0x40:  jmp    0812525b <+0x81>
0812521c +0x42:  lea    -0xd(%ebp),%eax
0812521f +0x45:  movl   $0x5,0x8(%esp)
08125227 +0x4d:  mov    %eax,0x4(%esp)
0812522b +0x51:  mov    0x10(%ebp),%eax
0812522e +0x54:  mov    %eax,(%esp)
08125231 +0x57:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08125236 +0x5c:  xor    $0x1,%eax
08125239 +0x5f:  test   %al,%al
0812523b +0x61:  je     08125244 <+0x6a>
0812523d +0x63:  mov    $0x28b,%eax
08125242 +0x68:  jmp    0812525b <+0x81>
08125244 +0x6a:  mov    -0xc(%ebp),%eax
08125247 +0x6d:  mov    %eax,0x4(%esp)
0812524b +0x71:  mov    0xc(%ebp),%eax
0812524e +0x74:  mov    %eax,(%esp)
08125251 +0x77:  call   0812255c <_ZN8APSystem9CUserProc27GetTodayRewardAndSendPostalEP5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE>  ; APSystem::CUserProc::GetTodayRewardAndSendPostal(CUser*, APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)
08125256 +0x7c:  mov    $0x0,%eax
0812525b +0x81:  leave
0812525c +0x82:  ret
```

## 反编译 C

```c
// APSystem::Dispatcher_GetTodayReward::dispatch_sig @ 0x81251da

/* APSystem::Dispatcher_GetTodayReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
APSystem::Dispatcher_GetTodayReward::dispatch_sig
          (Dispatcher_GetTodayReward *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char local_11;
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar3 = CUser::get_state(param_1);
    if (2 < iVar3) {
      iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar3 != 0) {
        bVar1 = false;
        goto LAB_08125211;
      }
    }
  }
  bVar1 = true;
LAB_08125211:
  if (bVar1) {
    uVar4 = 0x287;
  }
  else {
    cVar2 = PacketBuf::get_binary(param_2,&local_11,5);
    if (cVar2 == '\x01') {
      CUserProc::GetTodayRewardAndSendPostal(param_1,local_10);
      uVar4 = 0;
    }
    else {
      uVar4 = 0x28b;
    }
  }
  return uVar4;
}
```
