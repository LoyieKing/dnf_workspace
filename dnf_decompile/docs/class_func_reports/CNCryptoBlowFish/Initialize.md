# Initialize

`_ZN16CNCryptoBlowFish10InitializeEPKhi`

`CNCryptoBlowFish::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x080999a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080999a8  _ZN16CNCryptoBlowFish10InitializeEPKhi
#           CNCryptoBlowFish::Initialize(unsigned char const*, int)
# range [0x080999a8, 0x08099b29]
080999a8 +0x000:  push   %ebp
080999a9 +0x001:  mov    %esp,%ebp
080999ab +0x003:  push   %edi
080999ac +0x004:  push   %esi
080999ad +0x005:  push   %ebx
080999ae +0x006:  sub    $0x6c,%esp
080999b1 +0x009:  cmpl   $0x0,0x10(%ebp)
080999b5 +0x00d:  jg     080999c1 <+0x19>
080999b7 +0x00f:  mov    $0x70000002,%eax
080999bc +0x014:  jmp    08099b22 <+0x17a>
080999c1 +0x019:  cmpl   $0x37,0x10(%ebp)
080999c5 +0x01d:  jle    08099a5d <+0xb5>
080999cb +0x023:  movl   $0x0,0x8(%esp)
080999d3 +0x02b:  movl   $0x0,0x4(%esp)
080999db +0x033:  lea    -0x30(%ebp),%eax
080999de +0x036:  mov    %eax,(%esp)
080999e1 +0x039:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080999e6 +0x03e:  lea    -0x30(%ebp),%esi
080999e9 +0x041:  movl   $0x1058,(%esp)
080999f0 +0x048:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080999f5 +0x04d:  mov    %eax,%ebx
080999f7 +0x04f:  mov    %ebx,%eax
080999f9 +0x051:  mov    %esi,0xc(%esp)
080999fd +0x055:  movl   $0x38,0x8(%esp)
08099a05 +0x05d:  mov    0xc(%ebp),%edx
08099a08 +0x060:  mov    %edx,0x4(%esp)
08099a0c +0x064:  mov    %eax,(%esp)
08099a0f +0x067:  call   080a956c <_ZN9CBlowFishC1EPhjRK6SBlock>  ; CBlowFish::CBlowFish(unsigned char*, unsigned int, SBlock const&)
08099a14 +0x06c:  jmp    08099a2e <+0x86>
08099a16 +0x06e:  mov    %edx,%esi
08099a18 +0x070:  mov    %eax,%edi
08099a1a +0x072:  mov    %ebx,(%esp)
08099a1d +0x075:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099a22 +0x07a:  mov    %edi,%eax
08099a24 +0x07c:  mov    %esi,%edx
08099a26 +0x07e:  mov    %eax,(%esp)
08099a29 +0x081:  call   08ae3750 <_Unwind_Resume>
08099a2e +0x086:  mov    %ebx,-0x20(%ebp)
08099a31 +0x089:  cmpl   $0x0,-0x20(%ebp)
08099a35 +0x08d:  je     08099a53 <+0xab>
08099a37 +0x08f:  mov    0x8(%ebp),%eax
08099a3a +0x092:  mov    0x8(%eax),%eax
08099a3d +0x095:  mov    %eax,(%esp)
08099a40 +0x098:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099a45 +0x09d:  mov    0x8(%ebp),%eax
08099a48 +0x0a0:  mov    -0x20(%ebp),%edx
08099a4b +0x0a3:  mov    %edx,0x8(%eax)
08099a4e +0x0a6:  jmp    08099b1d <+0x175>
08099a53 +0x0ab:  mov    $0x7000000d,%eax
08099a58 +0x0b0:  jmp    08099b22 <+0x17a>
08099a5d +0x0b5:  movl   $0x38,0x8(%esp)
08099a65 +0x0bd:  movl   $0x0,0x4(%esp)
08099a6d +0x0c5:  lea    -0x68(%ebp),%eax
08099a70 +0x0c8:  mov    %eax,(%esp)
08099a73 +0x0cb:  call   0807dcc0 <_init+0x5b8>
08099a78 +0x0d0:  mov    0x10(%ebp),%eax
08099a7b +0x0d3:  mov    %eax,0x8(%esp)
08099a7f +0x0d7:  mov    0xc(%ebp),%eax
08099a82 +0x0da:  mov    %eax,0x4(%esp)
08099a86 +0x0de:  lea    -0x68(%ebp),%eax
08099a89 +0x0e1:  mov    %eax,(%esp)
08099a8c +0x0e4:  call   0807d8a0 <_init+0x198>
08099a91 +0x0e9:  movl   $0x0,0x8(%esp)
08099a99 +0x0f1:  movl   $0x0,0x4(%esp)
08099aa1 +0x0f9:  lea    -0x28(%ebp),%eax
08099aa4 +0x0fc:  mov    %eax,(%esp)
08099aa7 +0x0ff:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
08099aac +0x104:  lea    -0x28(%ebp),%esi
08099aaf +0x107:  movl   $0x1058,(%esp)
08099ab6 +0x10e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08099abb +0x113:  mov    %eax,%ebx
08099abd +0x115:  mov    %ebx,%eax
08099abf +0x117:  mov    %esi,0xc(%esp)
08099ac3 +0x11b:  movl   $0x38,0x8(%esp)
08099acb +0x123:  lea    -0x68(%ebp),%edx
08099ace +0x126:  mov    %edx,0x4(%esp)
08099ad2 +0x12a:  mov    %eax,(%esp)
08099ad5 +0x12d:  call   080a956c <_ZN9CBlowFishC1EPhjRK6SBlock>  ; CBlowFish::CBlowFish(unsigned char*, unsigned int, SBlock const&)
08099ada +0x132:  jmp    08099af4 <+0x14c>
08099adc +0x134:  mov    %edx,%esi
08099ade +0x136:  mov    %eax,%edi
08099ae0 +0x138:  mov    %ebx,(%esp)
08099ae3 +0x13b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099ae8 +0x140:  mov    %edi,%eax
08099aea +0x142:  mov    %esi,%edx
08099aec +0x144:  mov    %eax,(%esp)
08099aef +0x147:  call   08ae3750 <_Unwind_Resume>
08099af4 +0x14c:  mov    %ebx,-0x1c(%ebp)
08099af7 +0x14f:  cmpl   $0x0,-0x1c(%ebp)
08099afb +0x153:  je     08099b16 <+0x16e>
08099afd +0x155:  mov    0x8(%ebp),%eax
08099b00 +0x158:  mov    0x8(%eax),%eax
08099b03 +0x15b:  mov    %eax,(%esp)
08099b06 +0x15e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099b0b +0x163:  mov    0x8(%ebp),%eax
08099b0e +0x166:  mov    -0x1c(%ebp),%edx
08099b11 +0x169:  mov    %edx,0x8(%eax)
08099b14 +0x16c:  jmp    08099b1d <+0x175>
08099b16 +0x16e:  mov    $0x7000000d,%eax
08099b1b +0x173:  jmp    08099b22 <+0x17a>
08099b1d +0x175:  mov    $0x6fffffff,%eax
08099b22 +0x17a:  add    $0x6c,%esp
08099b25 +0x17d:  pop    %ebx
08099b26 +0x17e:  pop    %esi
08099b27 +0x17f:  pop    %edi
08099b28 +0x180:  pop    %ebp
08099b29 +0x181:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::Initialize @ 0x80999a8

/* CNCryptoBlowFish::Initialize(unsigned char const*, int) */

undefined4 __thiscall
CNCryptoBlowFish::Initialize(CNCryptoBlowFish *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  CBlowFish *pCVar2;
  uchar local_6c [56];
  SBlock local_34 [8];
  SBlock local_2c [8];
  CBlowFish *local_24;
  CBlowFish *local_20;
  
  if (param_2 < 1) {
    uVar1 = 0x70000002;
  }
  else {
    if (param_2 < 0x38) {
      memset(local_6c,0,0x38);
      memcpy(local_6c,param_1,param_2);
      SBlock::SBlock(local_2c,0,0);
      pCVar2 = operator_new(0x1058);
                    /* try { // try from 08099ad5 to 08099ad9 has its CatchHandler @ 08099adc */
      CBlowFish::CBlowFish(pCVar2,local_6c,0x38,local_2c);
      if (pCVar2 == (CBlowFish *)0x0) {
        return 0x7000000d;
      }
      local_20 = pCVar2;
      operator_delete(*(void **)(this + 8));
      *(CBlowFish **)(this + 8) = local_20;
    }
    else {
      SBlock::SBlock(local_34,0,0);
      pCVar2 = operator_new(0x1058);
                    /* try { // try from 08099a0f to 08099a13 has its CatchHandler @ 08099a16 */
      CBlowFish::CBlowFish(pCVar2,param_1,0x38,local_34);
      if (pCVar2 == (CBlowFish *)0x0) {
        return 0x7000000d;
      }
      local_24 = pCVar2;
      operator_delete(*(void **)(this + 8));
      *(CBlowFish **)(this + 8) = local_24;
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
