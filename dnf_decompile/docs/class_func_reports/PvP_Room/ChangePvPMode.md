# ChangePvPMode

`_ZN8PvP_Room13ChangePvPModeEi`

`PvP_Room::ChangePvPMode(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d8b2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d8b2a  _ZN8PvP_Room13ChangePvPModeEi
#           PvP_Room::ChangePvPMode(int)
# range [0x085d8b2a, 0x085d8bbb]
085d8b2a +0x00:  push   %ebp
085d8b2b +0x01:  mov    %esp,%ebp
085d8b2d +0x03:  sub    $0x28,%esp
085d8b30 +0x06:  movb   $0x0,-0x9(%ebp)
085d8b34 +0x0a:  lea    -0x9(%ebp),%eax
085d8b37 +0x0d:  mov    %eax,0x4(%esp)
085d8b3b +0x11:  mov    0xc(%ebp),%eax
085d8b3e +0x14:  mov    %eax,(%esp)
085d8b41 +0x17:  call   085d4690 <_Z15IsDeathMatchMapiRb>  ; IsDeathMatchMap(int, bool&)
085d8b46 +0x1c:  test   %al,%al
085d8b48 +0x1e:  je     085d8b8e <+0x64>
085d8b4a +0x20:  mov    0x8(%ebp),%eax
085d8b4d +0x23:  mov    0x4(%eax),%eax
085d8b50 +0x26:  cmp    $0x4,%eax
085d8b53 +0x29:  je     085d8bba <+0x90>
085d8b55 +0x2b:  mov    0x8(%ebp),%eax
085d8b58 +0x2e:  mov    0x4(%eax),%eax
085d8b5b +0x31:  cmp    $0x5,%eax
085d8b5e +0x34:  je     085d8bba <+0x90>
085d8b60 +0x36:  mov    0x8(%ebp),%eax
085d8b63 +0x39:  mov    0x4(%eax),%eax
085d8b66 +0x3c:  cmp    $0x1,%eax
085d8b69 +0x3f:  jne    085d8b77 <+0x4d>
085d8b6b +0x41:  mov    0x8(%ebp),%eax
085d8b6e +0x44:  movl   $0x4,0x4(%eax)
085d8b75 +0x4b:  jmp    085d8bba <+0x90>
085d8b77 +0x4d:  mov    0x8(%ebp),%eax
085d8b7a +0x50:  mov    0x4(%eax),%eax
085d8b7d +0x53:  cmp    $0x2,%eax
085d8b80 +0x56:  jne    085d8bba <+0x90>
085d8b82 +0x58:  mov    0x8(%ebp),%eax
085d8b85 +0x5b:  movl   $0x5,0x4(%eax)
085d8b8c +0x62:  jmp    085d8bba <+0x90>
085d8b8e +0x64:  mov    0x8(%ebp),%eax
085d8b91 +0x67:  mov    0x4(%eax),%eax
085d8b94 +0x6a:  cmp    $0x4,%eax
085d8b97 +0x6d:  jne    085d8ba5 <+0x7b>
085d8b99 +0x6f:  mov    0x8(%ebp),%eax
085d8b9c +0x72:  movl   $0x1,0x4(%eax)
085d8ba3 +0x79:  jmp    085d8bba <+0x90>
085d8ba5 +0x7b:  mov    0x8(%ebp),%eax
085d8ba8 +0x7e:  mov    0x4(%eax),%eax
085d8bab +0x81:  cmp    $0x5,%eax
085d8bae +0x84:  jne    085d8bba <+0x90>
085d8bb0 +0x86:  mov    0x8(%ebp),%eax
085d8bb3 +0x89:  movl   $0x2,0x4(%eax)
085d8bba +0x90:  leave
085d8bbb +0x91:  ret
```

## 反编译 C

```c
// PvP_Room::ChangePvPMode @ 0x85d8b2a

/* PvP_Room::ChangePvPMode(int) */

void __thiscall PvP_Room::ChangePvPMode(PvP_Room *this,int param_1)

{
  char cVar1;
  bool local_d [9];
  
  local_d[0] = false;
  cVar1 = IsDeathMatchMap(param_1,local_d);
  if (cVar1 == '\0') {
    if (*(int *)(this + 4) == 4) {
      *(undefined4 *)(this + 4) = 1;
    }
    else if (*(int *)(this + 4) == 5) {
      *(undefined4 *)(this + 4) = 2;
    }
  }
  else if ((*(int *)(this + 4) != 4) && (*(int *)(this + 4) != 5)) {
    if (*(int *)(this + 4) == 1) {
      *(undefined4 *)(this + 4) = 4;
    }
    else if (*(int *)(this + 4) == 2) {
      *(undefined4 *)(this + 4) = 5;
    }
  }
  return;
}
```
