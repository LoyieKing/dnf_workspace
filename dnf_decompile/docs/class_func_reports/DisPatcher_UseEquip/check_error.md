# check_error

`_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_UseEquip::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseEquip` | `0x081c0ee2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c0ee2  _ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_UseEquip::check_error(CUser*, MSG_BASE&)
# range [0x081c0ee2, 0x081c0fab]
081c0ee2 +0x00:  push   %ebp
081c0ee3 +0x01:  mov    %esp,%ebp
081c0ee5 +0x03:  sub    $0x28,%esp
081c0ee8 +0x06:  mov    0x10(%ebp),%eax
081c0eeb +0x09:  mov    %eax,-0x14(%ebp)
081c0eee +0x0c:  mov    0xc(%ebp),%eax
081c0ef1 +0x0f:  mov    %eax,(%esp)
081c0ef4 +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c0ef9 +0x17:  cmp    $0x5,%eax
081c0efc +0x1a:  je     081c0f45 <+0x63>
081c0efe +0x1c:  mov    0xc(%ebp),%eax
081c0f01 +0x1f:  mov    %eax,(%esp)
081c0f04 +0x22:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c0f09 +0x27:  cmp    $0x7,%eax
081c0f0c +0x2a:  je     081c0f45 <+0x63>
081c0f0e +0x2c:  mov    0xc(%ebp),%eax
081c0f11 +0x2f:  mov    %eax,(%esp)
081c0f14 +0x32:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c0f19 +0x37:  cmp    $0x8,%eax
081c0f1c +0x3a:  je     081c0f45 <+0x63>
081c0f1e +0x3c:  mov    0xc(%ebp),%eax
081c0f21 +0x3f:  mov    %eax,(%esp)
081c0f24 +0x42:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c0f29 +0x47:  cmp    $0xa,%eax
081c0f2c +0x4a:  je     081c0f45 <+0x63>
081c0f2e +0x4c:  mov    0xc(%ebp),%eax
081c0f31 +0x4f:  mov    %eax,(%esp)
081c0f34 +0x52:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c0f39 +0x57:  cmp    $0xc,%eax
081c0f3c +0x5a:  je     081c0f45 <+0x63>
081c0f3e +0x5c:  mov    $0x1,%eax
081c0f43 +0x61:  jmp    081c0f4a <+0x68>
081c0f45 +0x63:  mov    $0x0,%eax
081c0f4a +0x68:  test   %al,%al
081c0f4c +0x6a:  je     081c0f55 <+0x73>
081c0f4e +0x6c:  mov    $0x13,%eax
081c0f53 +0x71:  jmp    081c0faa <+0xc8>
081c0f55 +0x73:  mov    0xc(%ebp),%eax
081c0f58 +0x76:  mov    %eax,(%esp)
081c0f5b +0x79:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c0f60 +0x7e:  mov    %eax,-0x10(%ebp)
081c0f63 +0x81:  cmpl   $0x0,-0x10(%ebp)
081c0f67 +0x85:  je     081c0fa5 <+0xc3>
081c0f69 +0x87:  mov    -0x10(%ebp),%eax
081c0f6c +0x8a:  mov    0xcd8(%eax),%eax
081c0f72 +0x90:  cmp    $0x1,%eax
081c0f75 +0x93:  jne    081c0f7e <+0x9c>
081c0f77 +0x95:  mov    $0x13,%eax
081c0f7c +0x9a:  jmp    081c0faa <+0xc8>
081c0f7e +0x9c:  mov    -0x10(%ebp),%eax
081c0f81 +0x9f:  mov    0xcac(%eax),%eax
081c0f87 +0xa5:  mov    %eax,-0xc(%ebp)
081c0f8a +0xa8:  cmpl   $0x0,-0xc(%ebp)
081c0f8e +0xac:  je     081c0fa5 <+0xc3>
081c0f90 +0xae:  mov    -0xc(%ebp),%eax
081c0f93 +0xb1:  movzbl 0x89f(%eax),%eax
081c0f9a +0xb8:  test   %al,%al
081c0f9c +0xba:  je     081c0fa5 <+0xc3>
081c0f9e +0xbc:  mov    $0x13,%eax
081c0fa3 +0xc1:  jmp    081c0faa <+0xc8>
081c0fa5 +0xc3:  mov    $0x0,%eax
081c0faa +0xc8:  leave
081c0fab +0xc9:  ret
```

## 反编译 C

```c
// DisPatcher_UseEquip::check_error @ 0x81c0ee2

/* DisPatcher_UseEquip::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_UseEquip::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((((iVar2 == 5) || (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 7)) ||
      (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 8)) ||
     ((iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 10 ||
      (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 0xc)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x13;
  }
  iVar2 = CUser::GetParty((CUser *)param_2);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xcd8) == 1) {
      return 0x13;
    }
    if ((*(int *)(iVar2 + 0xcac) != 0) && (*(char *)(*(int *)(iVar2 + 0xcac) + 0x89f) != '\0')) {
      return 0x13;
    }
  }
  return 0;
}
```
