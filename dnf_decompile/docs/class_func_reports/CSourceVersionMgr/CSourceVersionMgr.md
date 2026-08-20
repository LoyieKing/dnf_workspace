# CSourceVersionMgr

`_ZN17CSourceVersionMgrC1Ev`

`CSourceVersionMgr::CSourceVersionMgr()`

| 类 | 地址 |
|---|---|
| `CSourceVersionMgr` | `0x086b22c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b22c0  _ZN17CSourceVersionMgrC1Ev
#           CSourceVersionMgr::CSourceVersionMgr()
# range [0x086b22c0, 0x086b2347]
086b22c0 +0x00:  push   %ebp
086b22c1 +0x01:  mov    %esp,%ebp
086b22c3 +0x03:  push   %esi
086b22c4 +0x04:  push   %ebx
086b22c5 +0x05:  sub    $0x10,%esp
086b22c8 +0x08:  mov    0x8(%ebp),%eax
086b22cb +0x0b:  mov    %eax,(%esp)
086b22ce +0x0e:  call   086b24a8 <_GLOBAL__I__ZN17CSourceVersionMgrC2Ev+0x120>  ; global constructors keyed to CSourceVersionMgr::CSourceVersionMgr()+0x120
086b22d3 +0x13:  movl   $&_ZL14gUnicodeBuffer+0xc6b0,0x8(%esp)
086b22db +0x1b:  movl   $".",0x4(%esp)
086b22e3 +0x23:  mov    0x8(%ebp),%eax
086b22e6 +0x26:  mov    %eax,(%esp)
086b22e9 +0x29:  call   086b2408 <_GLOBAL__I__ZN17CSourceVersionMgrC2Ev+0x80>  ; global constructors keyed to CSourceVersionMgr::CSourceVersionMgr()+0x80
086b22ee +0x2e:  movl   $&_ZL14gUnicodeBuffer+0xc6b0,0x8(%esp)
086b22f6 +0x36:  movl   $"../ServerCommon",0x4(%esp)
086b22fe +0x3e:  mov    0x8(%ebp),%eax
086b2301 +0x41:  mov    %eax,(%esp)
086b2304 +0x44:  call   086b2408 <_GLOBAL__I__ZN17CSourceVersionMgrC2Ev+0x80>  ; global constructors keyed to CSourceVersionMgr::CSourceVersionMgr()+0x80
086b2309 +0x49:  movl   $&_ZL14gUnicodeBuffer+0xc6b0,0x8(%esp)
086b2311 +0x51:  movl   $"../../DNFShared",0x4(%esp)
086b2319 +0x59:  mov    0x8(%ebp),%eax
086b231c +0x5c:  mov    %eax,(%esp)
086b231f +0x5f:  call   086b2408 <_GLOBAL__I__ZN17CSourceVersionMgrC2Ev+0x80>  ; global constructors keyed to CSourceVersionMgr::CSourceVersionMgr()+0x80
086b2324 +0x64:  jmp    086b2341 <+0x81>
086b2326 +0x66:  mov    %edx,%ebx
086b2328 +0x68:  mov    %eax,%esi
086b232a +0x6a:  mov    0x8(%ebp),%eax
086b232d +0x6d:  mov    %eax,(%esp)
086b2330 +0x70:  call   086b24bc <_GLOBAL__I__ZN17CSourceVersionMgrC2Ev+0x134>  ; global constructors keyed to CSourceVersionMgr::CSourceVersionMgr()+0x134
086b2335 +0x75:  mov    %esi,%eax
086b2337 +0x77:  mov    %ebx,%edx
086b2339 +0x79:  mov    %eax,(%esp)
086b233c +0x7c:  call   08ae3750 <_Unwind_Resume>
086b2341 +0x81:  add    $0x10,%esp
086b2344 +0x84:  pop    %ebx
086b2345 +0x85:  pop    %esi
086b2346 +0x86:  pop    %ebp
086b2347 +0x87:  ret
```

## 反编译 C

```c
// CSourceVersionMgr::CSourceVersionMgr @ 0x86b22c0

/* CSourceVersionMgr::CSourceVersionMgr() */

void __thiscall CSourceVersionMgr::CSourceVersionMgr(CSourceVersionMgr *this)

{
  std::vector<CSourceVersionMgr::SourceVersion,std::allocator<CSourceVersionMgr::SourceVersion>>::
  vector((vector<CSourceVersionMgr::SourceVersion,std::allocator<CSourceVersionMgr::SourceVersion>>
          *)this);
                    /* try { // try from 086b22e9 to 086b2323 has its CatchHandler @ 086b2326 */
  InsertSourceVersion(this,".",0x16bdc);
  InsertSourceVersion(this,"../ServerCommon",0x16bdc);
  InsertSourceVersion(this,"../../DNFShared",0x16bdc);
  return;
}
```
