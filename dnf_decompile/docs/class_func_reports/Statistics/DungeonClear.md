# DungeonClear

`_ZN10Statistics12DungeonClearEjjiiii`

`Statistics::DungeonClear(unsigned int, unsigned int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b81c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b81c  _ZN10Statistics12DungeonClearEjjiiii
#           Statistics::DungeonClear(unsigned int, unsigned int, int, int, int, int)
# range [0x0860b81c, 0x0860b867]
0860b81c +0x00:  push   %ebp
0860b81d +0x01:  mov    %esp,%ebp
0860b81f +0x03:  sub    $0x38,%esp
0860b822 +0x06:  mov    0x8(%ebp),%eax
0860b825 +0x09:  mov    %eax,-0x21(%ebp)
0860b828 +0x0c:  mov    0xc(%ebp),%eax
0860b82b +0x0f:  mov    %eax,-0x1d(%ebp)
0860b82e +0x12:  mov    0x10(%ebp),%eax
0860b831 +0x15:  mov    %eax,-0x19(%ebp)
0860b834 +0x18:  mov    0x14(%ebp),%eax
0860b837 +0x1b:  mov    %eax,-0x15(%ebp)
0860b83a +0x1e:  movb   $0x63,-0x9(%ebp)
0860b83e +0x22:  mov    0x18(%ebp),%eax
0860b841 +0x25:  mov    %eax,-0x11(%ebp)
0860b844 +0x28:  mov    0x1c(%ebp),%eax
0860b847 +0x2b:  mov    %eax,-0xd(%ebp)
0860b84a +0x2e:  movl   $0x19,0x8(%esp)
0860b852 +0x36:  lea    -0x21(%ebp),%eax
0860b855 +0x39:  mov    %eax,0x4(%esp)
0860b859 +0x3d:  movl   $0x3c,(%esp)
0860b860 +0x44:  call   0860b92e <_ZN10Statistics10SendSignalEiPvi>  ; Statistics::SendSignal(int, void*, int)
0860b865 +0x49:  leave
0860b866 +0x4a:  ret
0860b867 +0x4b:  nop
```

## 反编译 C

```c
// Statistics::DungeonClear @ 0x860b81c

/* Statistics::DungeonClear(unsigned int, unsigned int, int, int, int, int) */

void Statistics::DungeonClear
               (uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint local_25;
  uint local_21;
  int local_1d;
  int local_19;
  int local_15;
  int local_11;
  undefined1 local_d;
  
  local_25 = param_1;
  local_21 = param_2;
  local_1d = param_3;
  local_19 = param_4;
  local_d = 99;
  local_15 = param_5;
  local_11 = param_6;
  SendSignal(0x3c,&local_25,0x19);
  return;
}
```
