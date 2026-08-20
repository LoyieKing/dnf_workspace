# GenerateChecksum

`_ZN14WindowsExeFile16GenerateChecksumEP16CodeHackChecksumlmm`

`WindowsExeFile::GenerateChecksum(CodeHackChecksum*, long, unsigned long, unsigned long)`

| 类 | 地址 |
|---|---|
| `WindowsExeFile` | `0x085743d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085743d4  _ZN14WindowsExeFile16GenerateChecksumEP16CodeHackChecksumlmm
#           WindowsExeFile::GenerateChecksum(CodeHackChecksum*, long, unsigned long, unsigned long)
# range [0x085743d4, 0x08574469]
085743d4 +0x00:  push   %ebp
085743d5 +0x01:  mov    %esp,%ebp
085743d7 +0x03:  sub    $0x28,%esp
085743da +0x06:  mov    0x8(%ebp),%eax
085743dd +0x09:  add    $0x14,%eax
085743e0 +0x0c:  mov    %eax,(%esp)
085743e3 +0x0f:  call   08576606 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x7ca>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x7ca
085743e8 +0x14:  cmp    0x10(%ebp),%eax
085743eb +0x17:  setle  %al
085743ee +0x1a:  test   %al,%al
085743f0 +0x1c:  je     085743f9 <+0x25>
085743f2 +0x1e:  mov    $0x0,%eax
085743f7 +0x23:  jmp    08574468 <+0x94>
085743f9 +0x25:  mov    0x10(%ebp),%eax
085743fc +0x28:  mov    0x8(%ebp),%edx
085743ff +0x2b:  add    $0x14,%edx
08574402 +0x2e:  mov    %eax,0x4(%esp)
08574406 +0x32:  mov    %edx,(%esp)
08574409 +0x35:  call   08576622 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x7e6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x7e6
0857440e +0x3a:  mov    (%eax),%eax
08574410 +0x3c:  mov    (%eax),%eax
08574412 +0x3e:  mov    0x14(%ebp),%edx
08574415 +0x41:  mov    %edx,%ecx
08574417 +0x43:  sub    %eax,%ecx
08574419 +0x45:  mov    %ecx,%eax
0857441b +0x47:  mov    %eax,-0x10(%ebp)
0857441e +0x4a:  mov    0x10(%ebp),%eax
08574421 +0x4d:  mov    0x8(%ebp),%edx
08574424 +0x50:  add    $0x14,%edx
08574427 +0x53:  mov    %eax,0x4(%esp)
0857442b +0x57:  mov    %edx,(%esp)
0857442e +0x5a:  call   08576622 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x7e6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x7e6
08574433 +0x5f:  mov    (%eax),%eax
08574435 +0x61:  mov    0x4(%eax),%eax
08574438 +0x64:  add    -0x10(%ebp),%eax
0857443b +0x67:  mov    %eax,-0xc(%ebp)
0857443e +0x6a:  mov    0x8(%ebp),%eax
08574441 +0x6d:  mov    0x4(%eax),%eax
08574444 +0x70:  add    -0xc(%ebp),%eax
08574447 +0x73:  mov    %eax,-0x14(%ebp)
0857444a +0x76:  mov    -0x14(%ebp),%eax
0857444d +0x79:  mov    %eax,0x8(%esp)
08574451 +0x7d:  mov    0x18(%ebp),%eax
08574454 +0x80:  mov    %eax,0x4(%esp)
08574458 +0x84:  mov    0xc(%ebp),%eax
0857445b +0x87:  mov    %eax,(%esp)
0857445e +0x8a:  call   0808a4c4 <_Z23CalculateMemoryChecksumP16CodeHackChecksummPv>  ; CalculateMemoryChecksum(CodeHackChecksum*, unsigned long, void*)
08574463 +0x8f:  mov    $0x1,%eax
08574468 +0x94:  leave
08574469 +0x95:  ret
```

## 反编译 C

```c
// WindowsExeFile::GenerateChecksum @ 0x85743d4

/* WindowsExeFile::GenerateChecksum(CodeHackChecksum*, long, unsigned long, unsigned long) */

bool __thiscall
WindowsExeFile::GenerateChecksum
          (WindowsExeFile *this,CodeHackChecksum *param_1,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::size
                    ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                      *)(this + 0x14));
  if (param_2 < iVar2) {
    puVar3 = (undefined4 *)
             std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
             operator[]((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                         *)(this + 0x14),param_2);
    iVar1 = *(int *)*puVar3;
    piVar4 = (int *)std::
                    vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
                    operator[]((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                                *)(this + 0x14),param_2);
    CalculateMemoryChecksum
              (param_1,param_4,
               (void *)(*(int *)(this + 4) + *(int *)(*piVar4 + 4) + (param_3 - iVar1)));
  }
  return param_2 < iVar2;
}
```
