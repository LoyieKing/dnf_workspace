# GetBitFromLSB

`_ZN11CBitManager13GetBitFromLSBEi`

`CBitManager::GetBitFromLSB(int)`

| 类 | 地址 |
|---|---|
| `CBitManager` | `0x0831c160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c160  _ZN11CBitManager13GetBitFromLSBEi
#           CBitManager::GetBitFromLSB(int)
# range [0x0831c160, 0x0831c1d5]
0831c160 +0x00:  push   %ebp
0831c161 +0x01:  mov    %esp,%ebp
0831c163 +0x03:  sub    $0x28,%esp
0831c166 +0x06:  movb   $0x1,-0x18(%ebp)
0831c16a +0x0a:  movb   $0x3,-0x17(%ebp)
0831c16e +0x0e:  movb   $0x7,-0x16(%ebp)
0831c172 +0x12:  movb   $0xf,-0x15(%ebp)
0831c176 +0x16:  movb   $0x1f,-0x14(%ebp)
0831c17a +0x1a:  movb   $0x3f,-0x13(%ebp)
0831c17e +0x1e:  movb   $0x7f,-0x12(%ebp)
0831c182 +0x22:  movb   $0x0,-0x11(%ebp)
0831c186 +0x26:  movl   $0x0,-0x10(%ebp)
0831c18d +0x2d:  mov    0xc(%ebp),%eax
0831c190 +0x30:  sub    $0x1,%eax
0831c193 +0x33:  movzbl -0x18(%ebp,%eax,1),%eax
0831c198 +0x38:  mov    %al,-0x9(%ebp)
0831c19b +0x3b:  mov    0x8(%ebp),%eax
0831c19e +0x3e:  mov    (%eax),%edx
0831c1a0 +0x40:  mov    0x8(%ebp),%eax
0831c1a3 +0x43:  mov    0x8(%eax),%eax
0831c1a6 +0x46:  sub    $0x1,%eax
0831c1a9 +0x49:  lea    (%edx,%eax,1),%eax
0831c1ac +0x4c:  movzbl (%eax),%eax
0831c1af +0x4f:  and    -0x9(%ebp),%al
0831c1b2 +0x52:  mov    %al,-0x11(%ebp)
0831c1b5 +0x55:  mov    0x8(%ebp),%eax
0831c1b8 +0x58:  mov    (%eax),%eax
0831c1ba +0x5a:  mov    %eax,0x8(%esp)
0831c1be +0x5e:  mov    0xc(%ebp),%eax
0831c1c1 +0x61:  mov    %eax,0x4(%esp)
0831c1c5 +0x65:  mov    0x8(%ebp),%eax
0831c1c8 +0x68:  mov    %eax,(%esp)
0831c1cb +0x6b:  call   0831c1d6 <_ZN11CBitManager10ShiftRightEiPh>  ; CBitManager::ShiftRight(int, unsigned char*)
0831c1d0 +0x70:  movzbl -0x11(%ebp),%eax
0831c1d4 +0x74:  leave
0831c1d5 +0x75:  ret
```

## 反编译 C

```c
// CBitManager::GetBitFromLSB @ 0x831c160

/* CBitManager::GetBitFromLSB(int) */

byte __thiscall CBitManager::GetBitFromLSB(CBitManager *this,int param_1)

{
  byte abStack_1d [9];
  undefined4 local_14;
  byte local_d;
  
  abStack_1d[1] = 1;
  abStack_1d[2] = 3;
  abStack_1d[3] = 7;
  abStack_1d[4] = 0xf;
  abStack_1d[5] = 0x1f;
  abStack_1d[6] = 0x3f;
  abStack_1d[7] = 0x7f;
  local_14 = 0;
  local_d = abStack_1d[param_1];
  abStack_1d[8] = *(byte *)(*(int *)this + *(int *)(this + 8) + -1) & local_d;
  ShiftRight(this,param_1,*(uchar **)this);
  return abStack_1d[8];
}
```
