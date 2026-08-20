# ShiftRight

`_ZN11CBitManager10ShiftRightEiPh`

`CBitManager::ShiftRight(int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `CBitManager` | `0x0831c1d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c1d6  _ZN11CBitManager10ShiftRightEiPh
#           CBitManager::ShiftRight(int, unsigned char*)
# range [0x0831c1d6, 0x0831c265]
0831c1d6 +0x00:  push   %ebp
0831c1d7 +0x01:  mov    %esp,%ebp
0831c1d9 +0x03:  push   %edi
0831c1da +0x04:  push   %esi
0831c1db +0x05:  push   %ebx
0831c1dc +0x06:  sub    $0x10,%esp
0831c1df +0x09:  movl   $0x0,-0x10(%ebp)
0831c1e6 +0x10:  mov    0x8(%ebp),%eax
0831c1e9 +0x13:  mov    0x8(%eax),%eax
0831c1ec +0x16:  sub    $0x1,%eax
0831c1ef +0x19:  mov    %eax,-0x10(%ebp)
0831c1f2 +0x1c:  jmp    0831c251 <+0x7b>
0831c1f4 +0x1e:  mov    -0x10(%ebp),%eax
0831c1f7 +0x21:  add    0x10(%ebp),%eax
0831c1fa +0x24:  mov    -0x10(%ebp),%edx
0831c1fd +0x27:  add    0x10(%ebp),%edx
0831c200 +0x2a:  movzbl (%edx),%edx
0831c203 +0x2d:  movzbl %dl,%ebx
0831c206 +0x30:  mov    0xc(%ebp),%edx
0831c209 +0x33:  mov    %ebx,%esi
0831c20b +0x35:  mov    %edx,%ecx
0831c20d +0x37:  sar    %cl,%esi
0831c20f +0x39:  mov    %esi,%edx
0831c211 +0x3b:  mov    %dl,(%eax)
0831c213 +0x3d:  cmpl   $0x0,-0x10(%ebp)
0831c217 +0x41:  je     0831c24d <+0x77>
0831c219 +0x43:  mov    -0x10(%ebp),%eax
0831c21c +0x46:  add    0x10(%ebp),%eax
0831c21f +0x49:  mov    -0x10(%ebp),%edx
0831c222 +0x4c:  add    0x10(%ebp),%edx
0831c225 +0x4f:  movzbl (%edx),%edx
0831c228 +0x52:  mov    %edx,%ebx
0831c22a +0x54:  mov    -0x10(%ebp),%edx
0831c22d +0x57:  sub    $0x1,%edx
0831c230 +0x5a:  add    0x10(%ebp),%edx
0831c233 +0x5d:  movzbl (%edx),%edx
0831c236 +0x60:  movzbl %dl,%esi
0831c239 +0x63:  mov    $0x8,%edx
0831c23e +0x68:  sub    0xc(%ebp),%edx
0831c241 +0x6b:  mov    %esi,%edi
0831c243 +0x6d:  mov    %edx,%ecx
0831c245 +0x6f:  shl    %cl,%edi
0831c247 +0x71:  mov    %edi,%edx
0831c249 +0x73:  or     %ebx,%edx
0831c24b +0x75:  mov    %dl,(%eax)
0831c24d +0x77:  subl   $0x1,-0x10(%ebp)
0831c251 +0x7b:  mov    -0x10(%ebp),%eax
0831c254 +0x7e:  not    %eax
0831c256 +0x80:  shr    $0x1f,%eax
0831c259 +0x83:  test   %al,%al
0831c25b +0x85:  jne    0831c1f4 <+0x1e>
0831c25d +0x87:  add    $0x10,%esp
0831c260 +0x8a:  pop    %ebx
0831c261 +0x8b:  pop    %esi
0831c262 +0x8c:  pop    %edi
0831c263 +0x8d:  pop    %ebp
0831c264 +0x8e:  ret
0831c265 +0x8f:  nop
```

## 反编译 C

```c
// CBitManager::ShiftRight @ 0x831c1d6

/* CBitManager::ShiftRight(int, unsigned char*) */

void __thiscall CBitManager::ShiftRight(CBitManager *this,int param_1,uchar *param_2)

{
  int iVar1;
  int local_14;
  
  local_14 = *(int *)(this + 8);
  while (iVar1 = local_14, local_14 = iVar1 + -1, -1 < local_14) {
    param_2[local_14] = (uchar)((int)(uint)param_2[local_14] >> ((byte)param_1 & 0x1f));
    if (local_14 != 0) {
      param_2[local_14] = param_2[iVar1 + -2] << (8 - (byte)param_1 & 0x1f) | param_2[local_14];
    }
  }
  return;
}
```
