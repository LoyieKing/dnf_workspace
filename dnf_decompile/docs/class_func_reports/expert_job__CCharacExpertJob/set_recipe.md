# set_recipe

`_ZN10expert_job16CCharacExpertJob10set_recipeEi`

`expert_job::CCharacExpertJob::set_recipe(int)`

| 类 | 地址 |
|---|---|
| `expert_job::CCharacExpertJob` | `0x0832b264` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832b264  _ZN10expert_job16CCharacExpertJob10set_recipeEi
#           expert_job::CCharacExpertJob::set_recipe(int)
# range [0x0832b264, 0x0832b305]
0832b264 +0x00:  push   %ebp
0832b265 +0x01:  mov    %esp,%ebp
0832b267 +0x03:  push   %edi
0832b268 +0x04:  push   %esi
0832b269 +0x05:  push   %ebx
0832b26a +0x06:  sub    $0x10,%esp
0832b26d +0x09:  mov    0xc(%ebp),%eax
0832b270 +0x0c:  mov    %eax,%edx
0832b272 +0x0e:  sar    $0x1f,%edx
0832b275 +0x11:  shr    $0x1d,%edx
0832b278 +0x14:  lea    (%edx,%eax,1),%eax
0832b27b +0x17:  sar    $0x3,%eax
0832b27e +0x1a:  mov    %eax,-0x14(%ebp)
0832b281 +0x1d:  mov    0xc(%ebp),%eax
0832b284 +0x20:  mov    %eax,%edx
0832b286 +0x22:  sar    $0x1f,%edx
0832b289 +0x25:  shr    $0x1d,%edx
0832b28c +0x28:  add    %edx,%eax
0832b28e +0x2a:  and    $0x7,%eax
0832b291 +0x2d:  sub    %edx,%eax
0832b293 +0x2f:  mov    %eax,-0x10(%ebp)
0832b296 +0x32:  cmpl   $0x0,-0x14(%ebp)
0832b29a +0x36:  js     0832b2a2 <+0x3e>
0832b29c +0x38:  cmpl   $0x1d,-0x14(%ebp)
0832b2a0 +0x3c:  jle    0832b2a9 <+0x45>
0832b2a2 +0x3e:  mov    $0x0,%eax
0832b2a7 +0x43:  jmp    0832b2fe <+0x9a>
0832b2a9 +0x45:  mov    -0x14(%ebp),%eax
0832b2ac +0x48:  mov    0x8(%ebp),%edx
0832b2af +0x4b:  movzbl 0x10(%edx,%eax,1),%eax
0832b2b4 +0x50:  movsbl %al,%edx
0832b2b7 +0x53:  mov    -0x10(%ebp),%eax
0832b2ba +0x56:  mov    %edx,%ebx
0832b2bc +0x58:  mov    %eax,%ecx
0832b2be +0x5a:  sar    %cl,%ebx
0832b2c0 +0x5c:  mov    %ebx,%eax
0832b2c2 +0x5e:  and    $0x1,%eax
0832b2c5 +0x61:  test   %al,%al
0832b2c7 +0x63:  je     0832b2d0 <+0x6c>
0832b2c9 +0x65:  mov    $0x0,%eax
0832b2ce +0x6a:  jmp    0832b2fe <+0x9a>
0832b2d0 +0x6c:  mov    -0x14(%ebp),%eax
0832b2d3 +0x6f:  mov    -0x14(%ebp),%edx
0832b2d6 +0x72:  mov    0x8(%ebp),%ecx
0832b2d9 +0x75:  movzbl 0x10(%ecx,%edx,1),%ebx
0832b2de +0x7a:  mov    -0x10(%ebp),%edx
0832b2e1 +0x7d:  mov    $0x1,%esi
0832b2e6 +0x82:  mov    %esi,%edi
0832b2e8 +0x84:  mov    %edx,%ecx
0832b2ea +0x86:  shl    %cl,%edi
0832b2ec +0x88:  mov    %edi,%edx
0832b2ee +0x8a:  mov    %ebx,%ecx
0832b2f0 +0x8c:  or     %edx,%ecx
0832b2f2 +0x8e:  mov    0x8(%ebp),%edx
0832b2f5 +0x91:  mov    %cl,0x10(%edx,%eax,1)
0832b2f9 +0x95:  mov    $0x1,%eax
0832b2fe +0x9a:  add    $0x10,%esp
0832b301 +0x9d:  pop    %ebx
0832b302 +0x9e:  pop    %esi
0832b303 +0x9f:  pop    %edi
0832b304 +0xa0:  pop    %ebp
0832b305 +0xa1:  ret
```

## 反编译 C

```c
// expert_job::CCharacExpertJob::set_recipe @ 0x832b264

/* expert_job::CCharacExpertJob::set_recipe(int) */

undefined4 __thiscall expert_job::CCharacExpertJob::set_recipe(CCharacExpertJob *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  iVar1 = (int)(((uint)(param_1 >> 0x1f) >> 0x1d) + param_1) >> 3;
  if ((iVar1 < 0) || (0x1d < iVar1)) {
    uVar2 = 0;
  }
  else {
    bVar3 = (byte)(param_1 % 8);
    if (((int)(char)this[iVar1 + 0x10] >> (bVar3 & 0x1f) & 1U) == 0) {
      this[iVar1 + 0x10] =
           (CCharacExpertJob)((byte)this[iVar1 + 0x10] | (byte)(1 << (bVar3 & 0x1f)));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
