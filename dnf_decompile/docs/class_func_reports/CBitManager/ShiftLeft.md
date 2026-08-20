# ShiftLeft

`_ZN11CBitManager9ShiftLeftEiPh`

`CBitManager::ShiftLeft(int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `CBitManager` | `0x0831c266` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c266  _ZN11CBitManager9ShiftLeftEiPh
#           CBitManager::ShiftLeft(int, unsigned char*)
# range [0x0831c266, 0x0831c2fb]
0831c266 +0x00:  push   %ebp
0831c267 +0x01:  mov    %esp,%ebp
0831c269 +0x03:  push   %edi
0831c26a +0x04:  push   %esi
0831c26b +0x05:  push   %ebx
0831c26c +0x06:  sub    $0x10,%esp
0831c26f +0x09:  movl   $0x0,-0x10(%ebp)
0831c276 +0x10:  movl   $0x0,-0x10(%ebp)
0831c27d +0x17:  jmp    0831c2e4 <+0x7e>
0831c27f +0x19:  mov    -0x10(%ebp),%eax
0831c282 +0x1c:  add    0x10(%ebp),%eax
0831c285 +0x1f:  mov    -0x10(%ebp),%edx
0831c288 +0x22:  add    0x10(%ebp),%edx
0831c28b +0x25:  movzbl (%edx),%edx
0831c28e +0x28:  movzbl %dl,%ebx
0831c291 +0x2b:  mov    0xc(%ebp),%edx
0831c294 +0x2e:  mov    %ebx,%esi
0831c296 +0x30:  mov    %edx,%ecx
0831c298 +0x32:  shl    %cl,%esi
0831c29a +0x34:  mov    %esi,%edx
0831c29c +0x36:  mov    %dl,(%eax)
0831c29e +0x38:  mov    0x8(%ebp),%eax
0831c2a1 +0x3b:  mov    0x8(%eax),%eax
0831c2a4 +0x3e:  sub    $0x1,%eax
0831c2a7 +0x41:  cmp    -0x10(%ebp),%eax
0831c2aa +0x44:  je     0831c2e0 <+0x7a>
0831c2ac +0x46:  mov    -0x10(%ebp),%eax
0831c2af +0x49:  add    0x10(%ebp),%eax
0831c2b2 +0x4c:  mov    -0x10(%ebp),%edx
0831c2b5 +0x4f:  add    0x10(%ebp),%edx
0831c2b8 +0x52:  movzbl (%edx),%edx
0831c2bb +0x55:  mov    %edx,%ebx
0831c2bd +0x57:  mov    -0x10(%ebp),%edx
0831c2c0 +0x5a:  add    $0x1,%edx
0831c2c3 +0x5d:  add    0x10(%ebp),%edx
0831c2c6 +0x60:  movzbl (%edx),%edx
0831c2c9 +0x63:  movzbl %dl,%esi
0831c2cc +0x66:  mov    $0x8,%edx
0831c2d1 +0x6b:  sub    0xc(%ebp),%edx
0831c2d4 +0x6e:  mov    %esi,%edi
0831c2d6 +0x70:  mov    %edx,%ecx
0831c2d8 +0x72:  sar    %cl,%edi
0831c2da +0x74:  mov    %edi,%edx
0831c2dc +0x76:  or     %ebx,%edx
0831c2de +0x78:  mov    %dl,(%eax)
0831c2e0 +0x7a:  addl   $0x1,-0x10(%ebp)
0831c2e4 +0x7e:  mov    0x8(%ebp),%eax
0831c2e7 +0x81:  mov    0x8(%eax),%eax
0831c2ea +0x84:  cmp    -0x10(%ebp),%eax
0831c2ed +0x87:  setg   %al
0831c2f0 +0x8a:  test   %al,%al
0831c2f2 +0x8c:  jne    0831c27f <+0x19>
0831c2f4 +0x8e:  add    $0x10,%esp
0831c2f7 +0x91:  pop    %ebx
0831c2f8 +0x92:  pop    %esi
0831c2f9 +0x93:  pop    %edi
0831c2fa +0x94:  pop    %ebp
0831c2fb +0x95:  ret
```

## 反编译 C

```c
// CBitManager::ShiftLeft @ 0x831c266

/* CBitManager::ShiftLeft(int, unsigned char*) */

void __thiscall CBitManager::ShiftLeft(CBitManager *this,int param_1,uchar *param_2)

{
  int local_14;
  
  for (local_14 = 0; local_14 < *(int *)(this + 8); local_14 = local_14 + 1) {
    param_2[local_14] = param_2[local_14] << ((byte)param_1 & 0x1f);
    if (*(int *)(this + 8) + -1 != local_14) {
      param_2[local_14] =
           (byte)((int)(uint)param_2[local_14 + 1] >> (8 - (byte)param_1 & 0x1f)) |
           param_2[local_14];
    }
  }
  return;
}
```
