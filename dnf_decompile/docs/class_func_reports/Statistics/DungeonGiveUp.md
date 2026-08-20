# DungeonGiveUp

`_ZN10Statistics13DungeonGiveUpEjjiiii`

`Statistics::DungeonGiveUp(unsigned int, unsigned int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b868` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b868  _ZN10Statistics13DungeonGiveUpEjjiiii
#           Statistics::DungeonGiveUp(unsigned int, unsigned int, int, int, int, int)
# range [0x0860b868, 0x0860b8b3]
0860b868 +0x00:  push   %ebp
0860b869 +0x01:  mov    %esp,%ebp
0860b86b +0x03:  sub    $0x38,%esp
0860b86e +0x06:  mov    0x8(%ebp),%eax
0860b871 +0x09:  mov    %eax,-0x21(%ebp)
0860b874 +0x0c:  mov    0xc(%ebp),%eax
0860b877 +0x0f:  mov    %eax,-0x1d(%ebp)
0860b87a +0x12:  mov    0x10(%ebp),%eax
0860b87d +0x15:  mov    %eax,-0x19(%ebp)
0860b880 +0x18:  mov    0x14(%ebp),%eax
0860b883 +0x1b:  mov    %eax,-0x15(%ebp)
0860b886 +0x1e:  movb   $0x67,-0x9(%ebp)
0860b88a +0x22:  mov    0x18(%ebp),%eax
0860b88d +0x25:  mov    %eax,-0x11(%ebp)
0860b890 +0x28:  mov    0x1c(%ebp),%eax
0860b893 +0x2b:  mov    %eax,-0xd(%ebp)
0860b896 +0x2e:  movl   $0x19,0x8(%esp)
0860b89e +0x36:  lea    -0x21(%ebp),%eax
0860b8a1 +0x39:  mov    %eax,0x4(%esp)
0860b8a5 +0x3d:  movl   $0x3c,(%esp)
0860b8ac +0x44:  call   0860b92e <_ZN10Statistics10SendSignalEiPvi>  ; Statistics::SendSignal(int, void*, int)
0860b8b1 +0x49:  leave
0860b8b2 +0x4a:  ret
0860b8b3 +0x4b:  nop
```

## 反编译 C

```c
// Statistics::DungeonGiveUp @ 0x860b868

/* Statistics::DungeonGiveUp(unsigned int, unsigned int, int, int, int, int) */

void Statistics::DungeonGiveUp
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
  local_d = 0x67;
  local_15 = param_5;
  local_11 = param_6;
  SendSignal(0x3c,&local_25,0x19);
  return;
}
```
