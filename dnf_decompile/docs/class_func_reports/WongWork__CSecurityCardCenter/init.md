# init

`_ZN8WongWork19CSecurityCardCenter4initEv`

`WongWork::CSecurityCardCenter::init()`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCardCenter` | `0x085fe05e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe05e  _ZN8WongWork19CSecurityCardCenter4initEv
#           WongWork::CSecurityCardCenter::init()
# range [0x085fe05e, 0x085fe0eb]
085fe05e +0x00:  push   %ebp
085fe05f +0x01:  mov    %esp,%ebp
085fe061 +0x03:  sub    $0x38,%esp
085fe064 +0x06:  mov    0x8(%ebp),%eax
085fe067 +0x09:  movl   $0x0,0x1c(%esp)
085fe06f +0x11:  movl   $0x0,0x18(%esp)
085fe077 +0x19:  movl   $0x10,0x14(%esp)
085fe07f +0x21:  movl   $0x10,0x10(%esp)
085fe087 +0x29:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
085fe08f +0x31:  movl   $0x10,0x8(%esp)
085fe097 +0x39:  movl   $"n6;fw;vjfs0fuguf",0x4(%esp)
085fe09f +0x41:  mov    %eax,(%esp)
085fe0a2 +0x44:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
085fe0a7 +0x49:  movl   $0x0,-0xc(%ebp)
085fe0ae +0x50:  jmp    085fe0d1 <+0x73>
085fe0b0 +0x52:  mov    -0xc(%ebp),%eax
085fe0b3 +0x55:  lea    &_ZZN8WongWork19CSecurityCardCenter4initEvE12characterSet(%eax),%edx
085fe0b9 +0x5b:  mov    0x8(%ebp),%eax
085fe0bc +0x5e:  add    $0x47c,%eax
085fe0c1 +0x63:  mov    %edx,0x4(%esp)
085fe0c5 +0x67:  mov    %eax,(%esp)
085fe0c8 +0x6a:  call   084a66b0 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x698>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x698
085fe0cd +0x6f:  addl   $0x1,-0xc(%ebp)
085fe0d1 +0x73:  mov    -0xc(%ebp),%eax
085fe0d4 +0x76:  cmp    $0x29,%eax
085fe0d7 +0x79:  setbe  %al
085fe0da +0x7c:  test   %al,%al
085fe0dc +0x7e:  jne    085fe0b0 <+0x52>
085fe0de +0x80:  mov    0x8(%ebp),%eax
085fe0e1 +0x83:  movw   $0x1,0x484(%eax)
085fe0ea +0x8c:  leave
085fe0eb +0x8d:  ret
```

## 反编译 C

```c
// WongWork::CSecurityCardCenter::init @ 0x85fe05e

/* WongWork::CSecurityCardCenter::init() */

void __thiscall WongWork::CSecurityCardCenter::init(CSecurityCardCenter *this)

{
  uint local_10;
  
  CRijndael::Initialize
            ((CRijndael *)this,"n6;fw;vjfs0fuguf",0x10,CRijndael::sm_chain0,0x10,0x10,0,0);
  for (local_10 = 0; local_10 < 0x2a; local_10 = local_10 + 1) {
    std::list<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x47c),
               (uchar *)(init()::characterSet + local_10));
  }
  *(undefined2 *)(this + 0x484) = 1;
  return;
}
```
