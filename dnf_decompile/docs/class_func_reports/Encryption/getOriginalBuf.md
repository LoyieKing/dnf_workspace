# getOriginalBuf

`_ZN10Encryption14getOriginalBufEPciRj`

`Encryption::getOriginalBuf(char*, int, unsigned int&)`

| 类 | 地址 |
|---|---|
| `Encryption` | `0x0848dc4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848dc4c  _ZN10Encryption14getOriginalBufEPciRj
#           Encryption::getOriginalBuf(char*, int, unsigned int&)
# range [0x0848dc4c, 0x0848dd0b]
0848dc4c +0x00:  push   %ebp
0848dc4d +0x01:  mov    %esp,%ebp
0848dc4f +0x03:  sub    $0x158,%esp
0848dc55 +0x09:  mov    0x10(%ebp),%eax
0848dc58 +0x0c:  mov    (%eax),%ecx
0848dc5a +0x0e:  mov    $0x51eb851f,%edx
0848dc5f +0x13:  mov    %ecx,%eax
0848dc61 +0x15:  mul    %edx
0848dc63 +0x17:  mov    %edx,%eax
0848dc65 +0x19:  shr    $0x6,%eax
0848dc68 +0x1c:  imul   $0xc8,%eax,%eax
0848dc6e +0x22:  mov    %ecx,%edx
0848dc70 +0x24:  sub    %eax,%edx
0848dc72 +0x26:  mov    %edx,%eax
0848dc74 +0x28:  mov    %eax,-0x14(%ebp)
0848dc77 +0x2b:  movl   $0x0,-0x10(%ebp)
0848dc7e +0x32:  jmp    0848dce1 <+0x95>
0848dc80 +0x34:  mov    -0x14(%ebp),%edx
0848dc83 +0x37:  mov    -0x10(%ebp),%eax
0848dc86 +0x3a:  imul   $0x12c,%edx,%edx
0848dc8c +0x40:  lea    (%edx,%eax,1),%eax
0848dc8f +0x43:  mov    &index_array(,%eax,4),%eax
0848dc96 +0x4a:  mov    %eax,-0x18(%ebp)
0848dc99 +0x4d:  mov    -0x10(%ebp),%eax
0848dc9c +0x50:  mov    %eax,-0xc(%ebp)
0848dc9f +0x53:  jmp    0848dcbd <+0x71>
0848dca1 +0x55:  mov    -0xc(%ebp),%eax
0848dca4 +0x58:  mov    -0xc(%ebp),%edx
0848dca7 +0x5b:  sub    $0x1,%edx
0848dcaa +0x5e:  movzbl -0x144(%ebp,%edx,1),%edx
0848dcb2 +0x66:  mov    %dl,-0x144(%ebp,%eax,1)
0848dcb9 +0x6d:  subl   $0x1,-0xc(%ebp)
0848dcbd +0x71:  mov    -0x18(%ebp),%eax
0848dcc0 +0x74:  cmp    -0xc(%ebp),%eax
0848dcc3 +0x77:  setl   %al
0848dcc6 +0x7a:  test   %al,%al
0848dcc8 +0x7c:  jne    0848dca1 <+0x55>
0848dcca +0x7e:  mov    -0x18(%ebp),%eax
0848dccd +0x81:  mov    -0x10(%ebp),%edx
0848dcd0 +0x84:  add    0x8(%ebp),%edx
0848dcd3 +0x87:  movzbl (%edx),%edx
0848dcd6 +0x8a:  mov    %dl,-0x144(%ebp,%eax,1)
0848dcdd +0x91:  addl   $0x1,-0x10(%ebp)
0848dce1 +0x95:  mov    -0x10(%ebp),%eax
0848dce4 +0x98:  cmp    0xc(%ebp),%eax
0848dce7 +0x9b:  setl   %al
0848dcea +0x9e:  test   %al,%al
0848dcec +0xa0:  jne    0848dc80 <+0x34>
0848dcee +0xa2:  mov    0xc(%ebp),%eax
0848dcf1 +0xa5:  mov    %eax,0x8(%esp)
0848dcf5 +0xa9:  lea    -0x144(%ebp),%eax
0848dcfb +0xaf:  mov    %eax,0x4(%esp)
0848dcff +0xb3:  mov    0x8(%ebp),%eax
0848dd02 +0xb6:  mov    %eax,(%esp)
0848dd05 +0xb9:  call   0807d8a0 <_init+0x198>
0848dd0a +0xbe:  leave
0848dd0b +0xbf:  ret
```

## 反编译 C

```c
// Encryption::getOriginalBuf @ 0x848dc4c

/* Encryption::getOriginalBuf(char*, int, unsigned int&) */

void Encryption::getOriginalBuf(char *param_1,int param_2,uint *param_3)

{
  char acStack_149 [301];
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_18 = *param_3 % 200;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_1c = *(int *)(index_array + (local_18 * 300 + local_14) * 4);
    for (local_10 = local_14; local_1c < local_10; local_10 = local_10 + -1) {
      acStack_149[local_10 + 1] = acStack_149[local_10];
    }
    acStack_149[local_1c + 1] = param_1[local_14];
  }
  memcpy(param_1,acStack_149 + 1,param_2);
  return;
}
```
