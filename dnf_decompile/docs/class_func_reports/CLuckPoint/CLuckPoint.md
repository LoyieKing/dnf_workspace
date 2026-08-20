# CLuckPoint

`_ZN10CLuckPointC1Ev`

`CLuckPoint::CLuckPoint()`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x08550884` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550884  _ZN10CLuckPointC1Ev
#           CLuckPoint::CLuckPoint()
# range [0x08550884, 0x085508eb]
08550884 +0x00:  push   %ebp
08550885 +0x01:  mov    %esp,%ebp
08550887 +0x03:  push   %esi
08550888 +0x04:  push   %ebx
08550889 +0x05:  sub    $0x10,%esp
0855088c +0x08:  mov    0x8(%ebp),%eax
0855088f +0x0b:  mov    %eax,(%esp)
08550892 +0x0e:  call   082f1b1e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18a2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18a2
08550897 +0x13:  mov    0x8(%ebp),%eax
0855089a +0x16:  add    $0xc,%eax
0855089d +0x19:  mov    %eax,(%esp)
085508a0 +0x1c:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
085508a5 +0x21:  mov    0x8(%ebp),%eax
085508a8 +0x24:  mov    %eax,(%esp)
085508ab +0x27:  call   0855106c <_GLOBAL__I__ZN10CLuckPointC2Ev+0xbf>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xbf
085508b0 +0x2c:  jmp    085508e5 <+0x61>
085508b2 +0x2e:  mov    %edx,%ebx
085508b4 +0x30:  mov    %eax,%esi
085508b6 +0x32:  mov    0x8(%ebp),%eax
085508b9 +0x35:  add    $0xc,%eax
085508bc +0x38:  mov    %eax,(%esp)
085508bf +0x3b:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
085508c4 +0x40:  mov    %esi,%eax
085508c6 +0x42:  mov    %ebx,%edx
085508c8 +0x44:  jmp    085508ca <+0x46>
085508ca +0x46:  mov    %edx,%ebx
085508cc +0x48:  mov    %eax,%esi
085508ce +0x4a:  mov    0x8(%ebp),%eax
085508d1 +0x4d:  mov    %eax,(%esp)
085508d4 +0x50:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
085508d9 +0x55:  mov    %esi,%eax
085508db +0x57:  mov    %ebx,%edx
085508dd +0x59:  mov    %eax,(%esp)
085508e0 +0x5c:  call   08ae3750 <_Unwind_Resume>
085508e5 +0x61:  add    $0x10,%esp
085508e8 +0x64:  pop    %ebx
085508e9 +0x65:  pop    %esi
085508ea +0x66:  pop    %ebp
085508eb +0x67:  ret
```

## 反编译 C

```c
// CLuckPoint::CLuckPoint @ 0x8550884

/* CLuckPoint::CLuckPoint() */

void __thiscall CLuckPoint::CLuckPoint(CLuckPoint *this)

{
  std::vector<CUser*,std::allocator<CUser*>>::vector((vector<CUser*,std::allocator<CUser*>> *)this);
                    /* try { // try from 085508a0 to 085508a4 has its CatchHandler @ 085508ca */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xc));
                    /* try { // try from 085508ab to 085508af has its CatchHandler @ 085508b2 */
  std::vector<CUser*,std::allocator<CUser*>>::clear((vector<CUser*,std::allocator<CUser*>> *)this);
  return;
}
```
