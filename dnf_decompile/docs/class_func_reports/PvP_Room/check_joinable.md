# check_joinable

`_ZN8PvP_Room14check_joinableEP5CUser`

`PvP_Room::check_joinable(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6c44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6c44  _ZN8PvP_Room14check_joinableEP5CUser
#           PvP_Room::check_joinable(CUser*)
# range [0x085d6c44, 0x085d6cf1]
085d6c44 +0x00:  push   %ebp
085d6c45 +0x01:  mov    %esp,%ebp
085d6c47 +0x03:  sub    $0x28,%esp
085d6c4a +0x06:  mov    0x8(%ebp),%eax
085d6c4d +0x09:  mov    0xb8(%eax),%eax
085d6c53 +0x0f:  cmp    $0x1,%eax
085d6c56 +0x12:  je     085d6c62 <+0x1e>
085d6c58 +0x14:  mov    $0x4,%eax
085d6c5d +0x19:  jmp    085d6cef <+0xab>
085d6c62 +0x1e:  movl   $0x0,-0x10(%ebp)
085d6c69 +0x25:  mov    0x8(%ebp),%eax
085d6c6c +0x28:  mov    0x6e4(%eax),%eax
085d6c72 +0x2e:  mov    (%eax),%eax
085d6c74 +0x30:  add    $0x70,%eax
085d6c77 +0x33:  mov    (%eax),%ecx
085d6c79 +0x35:  mov    0x8(%ebp),%eax
085d6c7c +0x38:  mov    0x6e4(%eax),%eax
085d6c82 +0x3e:  mov    0xc(%ebp),%edx
085d6c85 +0x41:  mov    %edx,0x8(%esp)
085d6c89 +0x45:  mov    0x8(%ebp),%edx
085d6c8c +0x48:  mov    %edx,0x4(%esp)
085d6c90 +0x4c:  mov    %eax,(%esp)
085d6c93 +0x4f:  call   *%ecx
085d6c95 +0x51:  mov    %eax,-0x10(%ebp)
085d6c98 +0x54:  cmpl   $0x0,-0x10(%ebp)
085d6c9c +0x58:  setne  %al
085d6c9f +0x5b:  test   %al,%al
085d6ca1 +0x5d:  je     085d6ca8 <+0x64>
085d6ca3 +0x5f:  mov    -0x10(%ebp),%eax
085d6ca6 +0x62:  jmp    085d6cef <+0xab>
085d6ca8 +0x64:  movl   $0x0,-0xc(%ebp)
085d6caf +0x6b:  jmp    085d6cdf <+0x9b>
085d6cb1 +0x6d:  mov    -0xc(%ebp),%edx
085d6cb4 +0x70:  mov    0x8(%ebp),%eax
085d6cb7 +0x73:  add    $0xc,%edx
085d6cba +0x76:  mov    (%eax,%edx,4),%eax
085d6cbd +0x79:  test   %eax,%eax
085d6cbf +0x7b:  jne    085d6cdb <+0x97>
085d6cc1 +0x7d:  mov    -0xc(%ebp),%edx
085d6cc4 +0x80:  mov    0x8(%ebp),%eax
085d6cc7 +0x83:  add    $0x14,%edx
085d6cca +0x86:  mov    (%eax,%edx,4),%eax
085d6ccd +0x89:  cmp    $0xff,%eax
085d6cd2 +0x8e:  jne    085d6cdb <+0x97>
085d6cd4 +0x90:  mov    $0x0,%eax
085d6cd9 +0x95:  jmp    085d6cef <+0xab>
085d6cdb +0x97:  addl   $0x1,-0xc(%ebp)
085d6cdf +0x9b:  cmpl   $0x7,-0xc(%ebp)
085d6ce3 +0x9f:  setle  %al
085d6ce6 +0xa2:  test   %al,%al
085d6ce8 +0xa4:  jne    085d6cb1 <+0x6d>
085d6cea +0xa6:  mov    $0x4,%eax
085d6cef +0xab:  leave
085d6cf0 +0xac:  ret
085d6cf1 +0xad:  nop
```

## 反编译 C

```c
// PvP_Room::check_joinable @ 0x85d6c44

/* PvP_Room::check_joinable(CUser*) */

int __thiscall PvP_Room::check_joinable(PvP_Room *this,CUser *param_1)

{
  int iVar1;
  int local_10;
  
  if (*(int *)(this + 0xb8) == 1) {
    iVar1 = (**(code **)(**(int **)(this + 0x6e4) + 0x70))
                      (*(undefined4 *)(this + 0x6e4),this,param_1);
    if (iVar1 == 0) {
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) &&
           (*(int *)(this + (local_10 + 0x14) * 4) == 0xff)) {
          return 0;
        }
      }
      iVar1 = 4;
    }
  }
  else {
    iVar1 = 4;
  }
  return iVar1;
}
```
