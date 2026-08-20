# _GetUser

`_ZN19disconnect_detecter19CDisconnectDetecter8_GetUserEii`

`disconnect_detecter::CDisconnectDetecter::_GetUser(int, int)`

| 类 | 地址 |
|---|---|
| `disconnect_detecter::CDisconnectDetecter` | `0x08472222` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08472222  _ZN19disconnect_detecter19CDisconnectDetecter8_GetUserEii
#           disconnect_detecter::CDisconnectDetecter::_GetUser(int, int)
# range [0x08472222, 0x08472271]
08472222 +0x00:  push   %ebp
08472223 +0x01:  mov    %esp,%ebp
08472225 +0x03:  sub    $0x28,%esp
08472228 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0847222d +0x0b:  movl   $0x2,0x8(%esp)
08472235 +0x13:  mov    0xc(%ebp),%edx
08472238 +0x16:  mov    %edx,0x4(%esp)
0847223c +0x1a:  mov    %eax,(%esp)
0847223f +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08472244 +0x22:  mov    %eax,-0xc(%ebp)
08472247 +0x25:  cmpl   $0x0,-0xc(%ebp)
0847224b +0x29:  je     0847226c <+0x4a>
0847224d +0x2b:  mov    -0xc(%ebp),%eax
08472250 +0x2e:  mov    %eax,(%esp)
08472253 +0x31:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08472258 +0x36:  movzwl %ax,%eax
0847225b +0x39:  cmp    0x10(%ebp),%eax
0847225e +0x3c:  setne  %al
08472261 +0x3f:  test   %al,%al
08472263 +0x41:  je     0847226c <+0x4a>
08472265 +0x43:  mov    $0x0,%eax
0847226a +0x48:  jmp    0847226f <+0x4d>
0847226c +0x4a:  mov    -0xc(%ebp),%eax
0847226f +0x4d:  leave
08472270 +0x4e:  ret
08472271 +0x4f:  nop
```

## 反编译 C

```c
// disconnect_detecter::CDisconnectDetecter::_GetUser @ 0x8472222

/* disconnect_detecter::CDisconnectDetecter::_GetUser(int, int) */

CUser * __thiscall
disconnect_detecter::CDisconnectDetecter::_GetUser
          (CDisconnectDetecter *this,int param_1,int param_2)

{
  int iVar1;
  CUser *this_00;
  uint uVar2;
  
  iVar1 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar1,param_1);
  if ((this_00 != (CUser *)0x0) &&
     (uVar2 = CUser::get_unique_id(this_00), (uVar2 & 0xffff) != param_2)) {
    this_00 = (CUser *)0x0;
  }
  return this_00;
}
```
