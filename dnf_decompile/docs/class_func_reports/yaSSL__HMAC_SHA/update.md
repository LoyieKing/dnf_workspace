# update

`_ZN5yaSSL8HMAC_SHA6updateEPKhj`

`yaSSL::HMAC_SHA::update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_SHA` | `0x0879a300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a300  _ZN5yaSSL8HMAC_SHA6updateEPKhj
#           yaSSL::HMAC_SHA::update(unsigned char const*, unsigned int)
# range [0x0879a300, 0x0879a369]
0879a300 +0x00:  push   %ebp
0879a301 +0x01:  mov    %esp,%ebp
0879a303 +0x03:  sub    $0x28,%esp
0879a306 +0x06:  mov    0x8(%ebp),%eax
0879a309 +0x09:  mov    %ebx,-0xc(%ebp)
0879a30c +0x0c:  mov    %edi,-0x4(%ebp)
0879a30f +0x0f:  mov    %esi,-0x8(%ebp)
0879a312 +0x12:  mov    0x4(%eax),%esi
0879a315 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a31a +0x1a:  add    $0xbd287e,%ebx
0879a320 +0x20:  cmpb   $0x0,0xc(%esi)
0879a324 +0x24:  lea    0x10(%esi),%edi
0879a327 +0x27:  jne    0879a343 <+0x43>
0879a329 +0x29:  movl   $0x40,0x8(%esp)
0879a331 +0x31:  mov    (%esi),%eax
0879a333 +0x33:  mov    %edi,(%esp)
0879a336 +0x36:  mov    %eax,0x4(%esp)
0879a33a +0x3a:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
0879a33f +0x3f:  movb   $0x1,0xc(%esi)
0879a343 +0x43:  mov    0x10(%ebp),%eax
0879a346 +0x46:  mov    %edi,(%esp)
0879a349 +0x49:  mov    %eax,0x8(%esp)
0879a34d +0x4d:  mov    0xc(%ebp),%eax
0879a350 +0x50:  mov    %eax,0x4(%esp)
0879a354 +0x54:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
0879a359 +0x59:  mov    -0xc(%ebp),%ebx
0879a35c +0x5c:  mov    -0x8(%ebp),%esi
0879a35f +0x5f:  mov    -0x4(%ebp),%edi
0879a362 +0x62:  mov    %ebp,%esp
0879a364 +0x64:  pop    %ebp
0879a365 +0x65:  ret
0879a366 +0x66:  lea    0x0(%esi),%esi
0879a369 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_SHA::update @ 0x879a300

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_SHA::update(HMAC_SHA *this,uchar *param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::SHA::Update((SHA *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::SHA::Update((SHA *)(puVar1 + 4),param_1,param_2);
  return;
}
```
