# add

`_ZN5yaSSL8Sessions3addERKNS_3SSLE`

`yaSSL::Sessions::add(yaSSL::SSL const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Sessions` | `0x087531e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087531e0  _ZN5yaSSL8Sessions3addERKNS_3SSLE
#           yaSSL::Sessions::add(yaSSL::SSL const&)
# range [0x087531e0, 0x087532ea]
087531e0 +0x000:  push   %ebp
087531e1 +0x001:  mov    %esp,%ebp
087531e3 +0x003:  sub    $0x38,%esp
087531e6 +0x006:  mov    %ebx,-0xc(%ebp)
087531e9 +0x009:  call   08722df8 <__i686.get_pc_thunk.bx>
087531ee +0x00e:  add    $0xc199aa,%ebx
087531f4 +0x014:  mov    %edi,-0x4(%ebp)
087531f7 +0x017:  mov    0xc(%ebp),%edi
087531fa +0x01a:  mov    %esi,-0x8(%ebp)
087531fd +0x01d:  mov    0x8(%ebp),%esi
08753200 +0x020:  mov    %edi,(%esp)
08753203 +0x023:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08753208 +0x028:  mov    %eax,(%esp)
0875320b +0x02b:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
08753210 +0x030:  cmpb   $0x0,0x12c(%eax)
08753217 +0x037:  jne    08753268 <+0x88>
08753219 +0x039:  mov    0x14(%esi),%eax
0875321c +0x03c:  cmp    $0x100,%eax
08753221 +0x041:  jg     08753230 <+0x50>
08753223 +0x043:  mov    -0xc(%ebp),%ebx
08753226 +0x046:  mov    -0x8(%ebp),%esi
08753229 +0x049:  mov    -0x4(%ebp),%edi
0875322c +0x04c:  mov    %ebp,%esp
0875322e +0x04e:  pop    %ebp
0875322f +0x04f:  ret
08753230 +0x050:  mov    %edi,(%esp)
08753233 +0x053:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08753238 +0x058:  mov    %eax,(%esp)
0875323b +0x05b:  call   0874ea00 <_ZNK5yaSSL8Security10GetContextEv>  ; yaSSL::Security::GetContext() const
08753240 +0x060:  mov    %eax,(%esp)
08753243 +0x063:  call   0874e530 <_ZNK5yaSSL7SSL_CTX23GetSessionCacheFlushOffEv>  ; yaSSL::SSL_CTX::GetSessionCacheFlushOff() const
08753248 +0x068:  test   %al,%al
0875324a +0x06a:  jne    08753223 <+0x43>
0875324c +0x06c:  mov    %esi,(%esp)
0875324f +0x06f:  call   087530a0 <_ZN5yaSSL8Sessions5FlushEv>  ; yaSSL::Sessions::Flush()
08753254 +0x074:  mov    -0xc(%ebp),%ebx
08753257 +0x077:  mov    -0x8(%ebp),%esi
0875325a +0x07a:  mov    -0x4(%ebp),%edi
0875325d +0x07d:  mov    %ebp,%esp
0875325f +0x07f:  pop    %ebp
08753260 +0x080:  ret
08753261 +0x081:  lea    0x0(%esi,%eiz,1),%esi
08753268 +0x088:  movb   $0x0,0x4(%esp)
0875326d +0x08d:  movl   $0x64,(%esp)
08753274 +0x094:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08753279 +0x099:  mov    %edi,0x4(%esp)
0875327d +0x09d:  mov    %eax,%edx
0875327f +0x09f:  lea    0xc(%esi),%eax
08753282 +0x0a2:  mov    %eax,0x8(%esp)
08753286 +0x0a6:  mov    %edx,(%esp)
08753289 +0x0a9:  mov    %edx,-0x1c(%ebp)
0875328c +0x0ac:  call   08752940 <_ZN5yaSSL11SSL_SESSIONC1ERKNS_3SSLERNS_10RandomPoolE>  ; yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::SSL const&, yaSSL::RandomPool&)
08753291 +0x0b1:  movb   $0x0,0x4(%esp)
08753296 +0x0b6:  movl   $0xc,(%esp)
0875329d +0x0bd:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087532a2 +0x0c2:  movl   $0x0,(%eax)
087532a8 +0x0c8:  movl   $0x0,0x4(%eax)
087532af +0x0cf:  mov    -0x1c(%ebp),%edx
087532b2 +0x0d2:  mov    %edx,0x8(%eax)
087532b5 +0x0d5:  mov    0x4(%esi),%edx
087532b8 +0x0d8:  test   %edx,%edx
087532ba +0x0da:  je     087532e0 <+0x100>
087532bc +0x0dc:  mov    %eax,0x4(%edx)
087532bf +0x0df:  mov    0x4(%esi),%edx
087532c2 +0x0e2:  mov    %edx,(%eax)
087532c4 +0x0e4:  mov    %eax,0x4(%esi)
087532c7 +0x0e7:  mov    0x14(%esi),%eax
087532ca +0x0ea:  addl   $0x1,0x8(%esi)
087532ce +0x0ee:  add    $0x1,%eax
087532d1 +0x0f1:  mov    %eax,0x14(%esi)
087532d4 +0x0f4:  jmp    0875321c <+0x3c>
087532d9 +0x0f9:  lea    0x0(%esi,%eiz,1),%esi
087532e0 +0x100:  mov    %eax,(%esi)
087532e2 +0x102:  jmp    087532c4 <+0xe4>
087532e4 +0x104:  lea    0x0(%esi),%esi
087532ea +0x10a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::Sessions::add @ 0x87531e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::add(yaSSL::SSL const&) */

void __thiscall yaSSL::Sessions::add(Sessions *this,SSL *param_1)

{
  char cVar1;
  Security *pSVar2;
  int iVar3;
  SSL_CTX *this_00;
  SSL_SESSION *this_01;
  undefined4 *puVar4;
  uint in_stack_ffffffc8;
  SSL *pSVar5;
  
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar3 = Security::get_connection(pSVar2);
  if (*(char *)(iVar3 + 300) == '\0') {
    iVar3 = *(int *)(this + 0x14);
  }
  else {
    this_01 = operator_new(100,in_stack_ffffffc8 & 0xffffff00);
    pSVar5 = param_1;
    SSL_SESSION::SSL_SESSION(this_01,param_1,(RandomPool *)(this + 0xc));
    puVar4 = operator_new__(0xc,(uint)pSVar5 & 0xffffff00);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = this_01;
    if (*(int *)(this + 4) == 0) {
      *(undefined4 **)this = puVar4;
    }
    else {
      *(undefined4 **)(*(int *)(this + 4) + 4) = puVar4;
      *puVar4 = *(undefined4 *)(this + 4);
    }
    *(undefined4 **)(this + 4) = puVar4;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    iVar3 = *(int *)(this + 0x14) + 1;
    *(int *)(this + 0x14) = iVar3;
  }
  if (0x100 < iVar3) {
    pSVar2 = (Security *)SSL::getSecurity(param_1);
    this_00 = (SSL_CTX *)Security::GetContext(pSVar2);
    cVar1 = SSL_CTX::GetSessionCacheFlushOff(this_00);
    if (cVar1 == '\0') {
      Flush(this);
      return;
    }
  }
  return;
}
```
