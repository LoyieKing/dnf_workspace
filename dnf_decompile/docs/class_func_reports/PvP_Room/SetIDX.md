# SetIDX

`_ZN8PvP_Room6SetIDXEi`

`PvP_Room::SetIDX(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d62ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d62ac  _ZN8PvP_Room6SetIDXEi
#           PvP_Room::SetIDX(int)
# range [0x085d62ac, 0x085d62c7]
085d62ac +0x00:  push   %ebp
085d62ad +0x01:  mov    %esp,%ebp
085d62af +0x03:  sub    $0x18,%esp
085d62b2 +0x06:  mov    0x8(%ebp),%eax
085d62b5 +0x09:  mov    0xc(%ebp),%edx
085d62b8 +0x0c:  mov    %edx,(%eax)
085d62ba +0x0e:  mov    0x8(%ebp),%eax
085d62bd +0x11:  mov    %eax,(%esp)
085d62c0 +0x14:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
085d62c5 +0x19:  leave
085d62c6 +0x1a:  ret
085d62c7 +0x1b:  nop
```

## 反编译 C

```c
// PvP_Room::SetIDX @ 0x85d62ac

/* PvP_Room::SetIDX(int) */

void __thiscall PvP_Room::SetIDX(PvP_Room *this,int param_1)

{
  *(int *)this = param_1;
  reset(this);
  return;
}
```
