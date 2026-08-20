# check_error

`_ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_BlueMarble::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BlueMarble` | `0x081e612c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e612c  _ZN21Dispatcher_BlueMarble11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_BlueMarble::check_error(CUser*, MSG_BASE&)
# range [0x081e612c, 0x081e61f3]
081e612c +0x00:  push   %ebp
081e612d +0x01:  mov    %esp,%ebp
081e612f +0x03:  sub    $0x28,%esp
081e6132 +0x06:  mov    0x10(%ebp),%eax
081e6135 +0x09:  mov    %eax,-0x14(%ebp)
081e6138 +0x0c:  cmpl   $0x0,0xc(%ebp)
081e613c +0x10:  jne    081e6148 <+0x1c>
081e613e +0x12:  mov    $0xffffffff,%eax
081e6143 +0x17:  jmp    081e61f2 <+0xc6>
081e6148 +0x1c:  mov    -0x14(%ebp),%eax
081e614b +0x1f:  movzbl 0xd(%eax),%eax
081e614f +0x23:  cmp    $0x6,%al
081e6151 +0x25:  jne    081e615d <+0x31>
081e6153 +0x27:  mov    $0x0,%eax
081e6158 +0x2c:  jmp    081e61f2 <+0xc6>
081e615d +0x31:  mov    0xc(%ebp),%eax
081e6160 +0x34:  mov    %eax,(%esp)
081e6163 +0x37:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081e6168 +0x3c:  cmp    $0x1,%eax
081e616b +0x3f:  setne  %al
081e616e +0x42:  test   %al,%al
081e6170 +0x44:  je     081e6179 <+0x4d>
081e6172 +0x46:  mov    $0xfffffffe,%eax
081e6177 +0x4b:  jmp    081e61f2 <+0xc6>
081e6179 +0x4d:  mov    0xc(%ebp),%eax
081e617c +0x50:  mov    %eax,(%esp)
081e617f +0x53:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
081e6184 +0x58:  mov    %eax,-0x10(%ebp)
081e6187 +0x5b:  cmpl   $0x0,-0x10(%ebp)
081e618b +0x5f:  jne    081e6194 <+0x68>
081e618d +0x61:  mov    $0xfffffffd,%eax
081e6192 +0x66:  jmp    081e61f2 <+0xc6>
081e6194 +0x68:  mov    0xc(%ebp),%eax
081e6197 +0x6b:  mov    %eax,0x4(%esp)
081e619b +0x6f:  mov    -0x10(%ebp),%eax
081e619e +0x72:  mov    %eax,(%esp)
081e61a1 +0x75:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
081e61a6 +0x7a:  mov    %eax,-0xc(%ebp)
081e61a9 +0x7d:  cmpl   $0xffffffff,-0xc(%ebp)
081e61ad +0x81:  jne    081e61b6 <+0x8a>
081e61af +0x83:  mov    $0xfffffffc,%eax
081e61b4 +0x88:  jmp    081e61f2 <+0xc6>
081e61b6 +0x8a:  mov    0xc(%ebp),%eax
081e61b9 +0x8d:  mov    %eax,(%esp)
081e61bc +0x90:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e61c1 +0x95:  cmp    $0xb,%eax
081e61c4 +0x98:  je     081e61dd <+0xb1>
081e61c6 +0x9a:  mov    0xc(%ebp),%eax
081e61c9 +0x9d:  mov    %eax,(%esp)
081e61cc +0xa0:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e61d1 +0xa5:  cmp    $0x5,%eax
081e61d4 +0xa8:  je     081e61dd <+0xb1>
081e61d6 +0xaa:  mov    $0x1,%eax
081e61db +0xaf:  jmp    081e61e2 <+0xb6>
081e61dd +0xb1:  mov    $0x0,%eax
081e61e2 +0xb6:  test   %al,%al
081e61e4 +0xb8:  je     081e61ed <+0xc1>
081e61e6 +0xba:  mov    $0xfffffffb,%eax
081e61eb +0xbf:  jmp    081e61f2 <+0xc6>
081e61ed +0xc1:  mov    $0x0,%eax
081e61f2 +0xc6:  leave
081e61f3 +0xc7:  ret
```

## 反编译 C

```c
// Dispatcher_BlueMarble::check_error @ 0x81e612c

/* Dispatcher_BlueMarble::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BlueMarble::check_error(Dispatcher_BlueMarble *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  BlueMarble *this_00;
  undefined4 uVar3;
  
  if (param_1 == (CUser *)0x0) {
    return 0xffffffff;
  }
  if (param_2[0xd] == (MSG_BASE)0x6) {
    return 0;
  }
  iVar2 = CUser::getMoveSpace(param_1);
  if (iVar2 != 1) {
    return 0xfffffffe;
  }
  this_00 = (BlueMarble *)CUser::getBlueMarble(param_1);
  if (this_00 != (BlueMarble *)0x0) {
    iVar2 = BlueMarble::getUserSlot(this_00,param_1);
    if (iVar2 != -1) {
      iVar2 = CUser::get_state(param_1);
      if ((iVar2 == 0xb) || (iVar2 = CUser::get_state(param_1), iVar2 == 5)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = 0xfffffffb;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
    return 0xfffffffc;
  }
  return 0xfffffffd;
}
```
