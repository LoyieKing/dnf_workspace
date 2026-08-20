# setBestClearTime

`_ZN6CParty16setBestClearTimeEiii`

`CParty::setBestClearTime(int, int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be178` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be178  _ZN6CParty16setBestClearTimeEiii
#           CParty::setBestClearTime(int, int, int)
# range [0x085be178, 0x085be1f7]
085be178 +0x00:  push   %ebp
085be179 +0x01:  mov    %esp,%ebp
085be17b +0x03:  sub    $0x28,%esp
085be17e +0x06:  movl   $0x0,-0xc(%ebp)
085be185 +0x0d:  jmp    085be1eb <+0x73>
085be187 +0x0f:  mov    -0xc(%ebp),%eax
085be18a +0x12:  mov    %eax,0x4(%esp)
085be18e +0x16:  mov    0x8(%ebp),%eax
085be191 +0x19:  mov    %eax,(%esp)
085be194 +0x1c:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085be199 +0x21:  xor    $0x1,%eax
085be19c +0x24:  test   %al,%al
085be19e +0x26:  jne    085be1e6 <+0x6e>
085be1a0 +0x28:  mov    -0xc(%ebp),%edx
085be1a3 +0x2b:  mov    0x8(%ebp),%ecx
085be1a6 +0x2e:  mov    %edx,%eax
085be1a8 +0x30:  add    %eax,%eax
085be1aa +0x32:  add    %edx,%eax
085be1ac +0x34:  shl    $0x3,%eax
085be1af +0x37:  lea    (%ecx,%eax,1),%eax
085be1b2 +0x3a:  add    $0x78,%eax
085be1b5 +0x3d:  mov    (%eax),%eax
085be1b7 +0x3f:  movl   $0x12,0x4(%esp)
085be1bf +0x47:  mov    %eax,(%esp)
085be1c2 +0x4a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085be1c7 +0x4f:  mov    0x14(%ebp),%edx
085be1ca +0x52:  mov    %edx,0xc(%esp)
085be1ce +0x56:  mov    0x10(%ebp),%edx
085be1d1 +0x59:  mov    %edx,0x8(%esp)
085be1d5 +0x5d:  mov    0xc(%ebp),%edx
085be1d8 +0x60:  mov    %edx,0x4(%esp)
085be1dc +0x64:  mov    %eax,(%esp)
085be1df +0x67:  call   080c8928 <_ZN13BestClearTime16setBestClearTimeEiii>  ; BestClearTime::setBestClearTime(int, int, int)
085be1e4 +0x6c:  jmp    085be1e7 <+0x6f>
085be1e6 +0x6e:  nop
085be1e7 +0x6f:  addl   $0x1,-0xc(%ebp)
085be1eb +0x73:  cmpl   $0x3,-0xc(%ebp)
085be1ef +0x77:  setle  %al
085be1f2 +0x7a:  test   %al,%al
085be1f4 +0x7c:  jne    085be187 <+0xf>
085be1f6 +0x7e:  leave
085be1f7 +0x7f:  ret
```

## 反编译 C

```c
// CParty::setBestClearTime @ 0x85be178

/* CParty::setBestClearTime(int, int, int) */

void __thiscall CParty::setBestClearTime(CParty *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  BestClearTime *this_00;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      this_00 = (BestClearTime *)
                CUser::GetCharacExpandData(*(CUser **)(this + local_10 * 0x18 + 0x78),0x12);
      BestClearTime::setBestClearTime(this_00,param_1,param_2,param_3);
    }
  }
  return;
}
```
