# GenerateChecksum

`_ZN15WindowsDataFile16GenerateChecksumEP16CodeHackChecksummm`

`WindowsDataFile::GenerateChecksum(CodeHackChecksum*, unsigned long, unsigned long)`

| 类 | 地址 |
|---|---|
| `WindowsDataFile` | `0x08574eba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574eba  _ZN15WindowsDataFile16GenerateChecksumEP16CodeHackChecksummm
#           WindowsDataFile::GenerateChecksum(CodeHackChecksum*, unsigned long, unsigned long)
# range [0x08574eba, 0x08574f15]
08574eba +0x00:  push   %ebp
08574ebb +0x01:  mov    %esp,%ebp
08574ebd +0x03:  sub    $0x18,%esp
08574ec0 +0x06:  mov    0x8(%ebp),%eax
08574ec3 +0x09:  mov    (%eax),%eax
08574ec5 +0x0b:  cmp    0x10(%ebp),%eax
08574ec8 +0x0e:  ja     08574ed7 <+0x1d>
08574eca +0x10:  mov    0xc(%ebp),%eax
08574ecd +0x13:  mov    %eax,(%esp)
08574ed0 +0x16:  call   0808a49c <_Z18ZeroMemoryChecksumP16CodeHackChecksum>  ; ZeroMemoryChecksum(CodeHackChecksum*)
08574ed5 +0x1b:  jmp    08574f13 <+0x59>
08574ed7 +0x1d:  mov    0x8(%ebp),%eax
08574eda +0x20:  mov    (%eax),%eax
08574edc +0x22:  mov    0x14(%ebp),%edx
08574edf +0x25:  mov    0x10(%ebp),%ecx
08574ee2 +0x28:  lea    (%ecx,%edx,1),%edx
08574ee5 +0x2b:  cmp    %edx,%eax
08574ee7 +0x2d:  jae    08574ef4 <+0x3a>
08574ee9 +0x2f:  mov    0x8(%ebp),%eax
08574eec +0x32:  mov    (%eax),%eax
08574eee +0x34:  sub    0x10(%ebp),%eax
08574ef1 +0x37:  mov    %eax,0x14(%ebp)
08574ef4 +0x3a:  mov    0x8(%ebp),%eax
08574ef7 +0x3d:  mov    0x4(%eax),%eax
08574efa +0x40:  add    0x10(%ebp),%eax
08574efd +0x43:  mov    %eax,0x8(%esp)
08574f01 +0x47:  mov    0x14(%ebp),%eax
08574f04 +0x4a:  mov    %eax,0x4(%esp)
08574f08 +0x4e:  mov    0xc(%ebp),%eax
08574f0b +0x51:  mov    %eax,(%esp)
08574f0e +0x54:  call   0808a4c4 <_Z23CalculateMemoryChecksumP16CodeHackChecksummPv>  ; CalculateMemoryChecksum(CodeHackChecksum*, unsigned long, void*)
08574f13 +0x59:  leave
08574f14 +0x5a:  ret
08574f15 +0x5b:  nop
```

## 反编译 C

```c
// WindowsDataFile::GenerateChecksum @ 0x8574eba

/* WindowsDataFile::GenerateChecksum(CodeHackChecksum*, unsigned long, unsigned long) */

void __thiscall
WindowsDataFile::GenerateChecksum
          (WindowsDataFile *this,CodeHackChecksum *param_1,ulong param_2,ulong param_3)

{
  if (param_2 < *(uint *)this) {
    if (*(uint *)this < param_2 + param_3) {
      param_3 = *(int *)this - param_2;
    }
    CalculateMemoryChecksum(param_1,param_3,(void *)(*(int *)(this + 4) + param_2));
  }
  else {
    ZeroMemoryChecksum(param_1);
  }
  return;
}
```
