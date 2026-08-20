# GenerateRange

`_ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_`

`WindowsExeFileFamily::GenerateRange(long*, unsigned long*, unsigned long*)`

| 类 | 地址 |
|---|---|
| `WindowsExeFileFamily` | `0x08574b8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574b8e  _ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_
#           WindowsExeFileFamily::GenerateRange(long*, unsigned long*, unsigned long*)
# range [0x08574b8e, 0x08574cef]
08574b8e +0x000:  push   %ebp
08574b8f +0x001:  mov    %esp,%ebp
08574b91 +0x003:  push   %ebx
08574b92 +0x004:  sub    $0x24,%esp
08574b95 +0x007:  movb   $0x0,-0x9(%ebp)
08574b99 +0x00b:  mov    0x8(%ebp),%eax
08574b9c +0x00e:  mov    %eax,(%esp)
08574b9f +0x011:  call   08576b00 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xcc4>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xcc4
08574ba4 +0x016:  test   %al,%al
08574ba6 +0x018:  je     08574bb2 <+0x24>
08574ba8 +0x01a:  mov    $0x0,%eax
08574bad +0x01f:  jmp    08574cea <+0x15c>
08574bb2 +0x024:  mov    0x8(%ebp),%eax
08574bb5 +0x027:  mov    0x124(%eax),%ebx
08574bbb +0x02d:  call   0807dca0 <_init+0x598>
08574bc0 +0x032:  mov    0x8(%ebp),%edx
08574bc3 +0x035:  mov    0x128(%edx),%edx
08574bc9 +0x03b:  lea    0x1(%edx),%ecx
08574bcc +0x03e:  mov    $0x0,%edx
08574bd1 +0x043:  div    %ecx
08574bd3 +0x045:  mov    %edx,%eax
08574bd5 +0x047:  lea    (%ebx,%eax,1),%eax
08574bd8 +0x04a:  mov    %eax,-0x14(%ebp)
08574bdb +0x04d:  mov    0x8(%ebp),%eax
08574bde +0x050:  mov    0x11c(%eax),%edx
08574be4 +0x056:  mov    0x8(%ebp),%eax
08574be7 +0x059:  mov    %edx,0x4(%esp)
08574beb +0x05d:  mov    %eax,(%esp)
08574bee +0x060:  call   085763dc <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5a0>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5a0
08574bf3 +0x065:  mov    %eax,-0x10(%ebp)
08574bf6 +0x068:  mov    -0x10(%ebp),%eax
08574bf9 +0x06b:  mov    (%eax),%edx
08574bfb +0x06d:  mov    -0x10(%ebp),%eax
08574bfe +0x070:  mov    0x4(%eax),%eax
08574c01 +0x073:  lea    (%edx,%eax,1),%eax
08574c04 +0x076:  mov    %eax,%edx
08574c06 +0x078:  mov    0x8(%ebp),%eax
08574c09 +0x07b:  mov    0x120(%eax),%eax
08574c0f +0x081:  add    -0x14(%ebp),%eax
08574c12 +0x084:  cmp    %eax,%edx
08574c14 +0x086:  ja     08574c3c <+0xae>
08574c16 +0x088:  mov    -0x10(%ebp),%eax
08574c19 +0x08b:  mov    (%eax),%edx
08574c1b +0x08d:  mov    -0x10(%ebp),%eax
08574c1e +0x090:  mov    0x4(%eax),%eax
08574c21 +0x093:  lea    (%edx,%eax,1),%eax
08574c24 +0x096:  mov    %eax,%edx
08574c26 +0x098:  mov    0x8(%ebp),%eax
08574c29 +0x09b:  mov    0x120(%eax),%eax
08574c2f +0x0a1:  mov    %edx,%ecx
08574c31 +0x0a3:  sub    %eax,%ecx
08574c33 +0x0a5:  mov    %ecx,%eax
08574c35 +0x0a7:  mov    %eax,-0x14(%ebp)
08574c38 +0x0aa:  movb   $0x1,-0x9(%ebp)
08574c3c +0x0ae:  mov    0x8(%ebp),%eax
08574c3f +0x0b1:  mov    0x11c(%eax),%eax
08574c45 +0x0b7:  mov    %eax,%edx
08574c47 +0x0b9:  mov    0xc(%ebp),%eax
08574c4a +0x0bc:  mov    %edx,(%eax)
08574c4c +0x0be:  mov    0x8(%ebp),%eax
08574c4f +0x0c1:  mov    0x120(%eax),%edx
08574c55 +0x0c7:  mov    0x10(%ebp),%eax
08574c58 +0x0ca:  mov    %edx,(%eax)
08574c5a +0x0cc:  mov    0x14(%ebp),%eax
08574c5d +0x0cf:  mov    -0x14(%ebp),%edx
08574c60 +0x0d2:  mov    %edx,(%eax)
08574c62 +0x0d4:  cmpb   $0x0,-0x9(%ebp)
08574c66 +0x0d8:  je     08574cce <+0x140>
08574c68 +0x0da:  mov    0x8(%ebp),%eax
08574c6b +0x0dd:  mov    0x11c(%eax),%eax
08574c71 +0x0e3:  lea    0x1(%eax),%edx
08574c74 +0x0e6:  mov    0x8(%ebp),%eax
08574c77 +0x0e9:  mov    %edx,0x11c(%eax)
08574c7d +0x0ef:  mov    0x8(%ebp),%eax
08574c80 +0x0f2:  mov    %eax,(%esp)
08574c83 +0x0f5:  call   085763c0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x584>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x584
08574c88 +0x0fa:  mov    0x8(%ebp),%edx
08574c8b +0x0fd:  mov    0x11c(%edx),%edx
08574c91 +0x103:  cmp    %edx,%eax
08574c93 +0x105:  setbe  %al
08574c96 +0x108:  test   %al,%al
08574c98 +0x10a:  je     08574ca7 <+0x119>
08574c9a +0x10c:  mov    0x8(%ebp),%eax
08574c9d +0x10f:  movl   $0x0,0x11c(%eax)
08574ca7 +0x119:  mov    0x8(%ebp),%eax
08574caa +0x11c:  mov    0x11c(%eax),%edx
08574cb0 +0x122:  mov    0x8(%ebp),%eax
08574cb3 +0x125:  mov    %edx,0x4(%esp)
08574cb7 +0x129:  mov    %eax,(%esp)
08574cba +0x12c:  call   085763dc <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5a0>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5a0
08574cbf +0x131:  mov    (%eax),%eax
08574cc1 +0x133:  mov    %eax,%edx
08574cc3 +0x135:  mov    0x8(%ebp),%eax
08574cc6 +0x138:  mov    %edx,0x120(%eax)
08574ccc +0x13e:  jmp    08574ce5 <+0x157>
08574cce +0x140:  mov    0x8(%ebp),%eax
08574cd1 +0x143:  mov    0x120(%eax),%eax
08574cd7 +0x149:  mov    %eax,%edx
08574cd9 +0x14b:  add    -0x14(%ebp),%edx
08574cdc +0x14e:  mov    0x8(%ebp),%eax
08574cdf +0x151:  mov    %edx,0x120(%eax)
08574ce5 +0x157:  mov    $0x1,%eax
08574cea +0x15c:  add    $0x24,%esp
08574ced +0x15f:  pop    %ebx
08574cee +0x160:  pop    %ebp
08574cef +0x161:  ret
```

## 反编译 C

```c
// WindowsExeFileFamily::GenerateRange @ 0x8574b8e

/* WindowsExeFileFamily::GenerateRange(long*, unsigned long*, unsigned long*) */

undefined4 __thiscall
WindowsExeFileFamily::GenerateRange
          (WindowsExeFileFamily *this,long *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  ulong local_18;
  
  cVar3 = std::vector<Interval,std::allocator<Interval>>::empty();
  if (cVar3 == '\0') {
    iVar1 = *(int *)(this + 0x124);
    uVar5 = rand();
    local_18 = iVar1 + uVar5 % (*(int *)(this + 0x128) + 1U);
    piVar6 = (int *)std::vector<Interval,std::allocator<Interval>>::operator[]
                              ((vector<Interval,std::allocator<Interval>> *)this,
                               *(uint *)(this + 0x11c));
    bVar2 = (uint)(*piVar6 + piVar6[1]) <= *(int *)(this + 0x120) + local_18;
    if (bVar2) {
      local_18 = (*piVar6 + piVar6[1]) - *(int *)(this + 0x120);
    }
    *param_1 = *(long *)(this + 0x11c);
    *param_2 = *(ulong *)(this + 0x120);
    *param_3 = local_18;
    if (bVar2) {
      *(int *)(this + 0x11c) = *(int *)(this + 0x11c) + 1;
      uVar5 = std::vector<Interval,std::allocator<Interval>>::size
                        ((vector<Interval,std::allocator<Interval>> *)this);
      if (uVar5 <= *(uint *)(this + 0x11c)) {
        *(undefined4 *)(this + 0x11c) = 0;
      }
      puVar7 = (undefined4 *)
               std::vector<Interval,std::allocator<Interval>>::operator[]
                         ((vector<Interval,std::allocator<Interval>> *)this,*(uint *)(this + 0x11c))
      ;
      *(undefined4 *)(this + 0x120) = *puVar7;
    }
    else {
      *(ulong *)(this + 0x120) = *(int *)(this + 0x120) + local_18;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
