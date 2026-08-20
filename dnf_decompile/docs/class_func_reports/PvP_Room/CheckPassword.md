# CheckPassword

`_ZN8PvP_Room13CheckPasswordEPKci`

`PvP_Room::CheckPassword(char const*, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085ddeae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ddeae  _ZN8PvP_Room13CheckPasswordEPKci
#           PvP_Room::CheckPassword(char const*, int)
# range [0x085ddeae, 0x085ddef5]
085ddeae +0x00:  push   %ebp
085ddeaf +0x01:  mov    %esp,%ebp
085ddeb1 +0x03:  sub    $0x18,%esp
085ddeb4 +0x06:  mov    0x8(%ebp),%eax
085ddeb7 +0x09:  mov    0x610(%eax),%eax
085ddebd +0x0f:  cmp    0x10(%ebp),%eax
085ddec0 +0x12:  je     085ddec9 <+0x1b>
085ddec2 +0x14:  mov    $0x0,%eax
085ddec7 +0x19:  jmp    085ddef3 <+0x45>
085ddec9 +0x1b:  mov    0x8(%ebp),%eax
085ddecc +0x1e:  mov    0x610(%eax),%eax
085dded2 +0x24:  mov    0x8(%ebp),%edx
085dded5 +0x27:  add    $0x605,%edx
085ddedb +0x2d:  mov    %eax,0x8(%esp)
085ddedf +0x31:  mov    0xc(%ebp),%eax
085ddee2 +0x34:  mov    %eax,0x4(%esp)
085ddee6 +0x38:  mov    %edx,(%esp)
085ddee9 +0x3b:  call   0807dc90 <_init+0x588>
085ddeee +0x40:  test   %eax,%eax
085ddef0 +0x42:  sete   %al
085ddef3 +0x45:  leave
085ddef4 +0x46:  ret
085ddef5 +0x47:  nop
```

## 反编译 C

```c
// PvP_Room::CheckPassword @ 0x85ddeae

/* PvP_Room::CheckPassword(char const*, int) */

bool __thiscall PvP_Room::CheckPassword(PvP_Room *this,char *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(this + 0x610) == param_2) {
    iVar1 = memcmp(this + 0x605,param_1,*(size_t *)(this + 0x610));
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
```
