# get

`_ZN8TaoCrypt10FileSource3getERNS_6SourceE`

`TaoCrypt::FileSource::get(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::FileSource` | `0x08758a40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758a40  _ZN8TaoCrypt10FileSource3getERNS_6SourceE
#           TaoCrypt::FileSource::get(TaoCrypt::Source&)
# range [0x08758a40, 0x08758b6a]
08758a40 +0x000:  push   %ebp
08758a41 +0x001:  mov    %esp,%ebp
08758a43 +0x003:  sub    $0x38,%esp
08758a46 +0x006:  mov    %ebx,-0xc(%ebp)
08758a49 +0x009:  mov    0x8(%ebp),%edx
08758a4c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08758a51 +0x011:  add    $0xc14147,%ebx
08758a57 +0x017:  mov    %edi,-0x4(%ebp)
08758a5a +0x01a:  mov    0xc(%ebp),%edi
08758a5d +0x01d:  mov    %esi,-0x8(%ebp)
08758a60 +0x020:  mov    %edx,(%esp)
08758a63 +0x023:  mov    %edx,-0x24(%ebp)
08758a66 +0x026:  movl   $0x0,0x4(%esp)
08758a6e +0x02e:  call   08758950 <_ZN8TaoCrypt10FileSource4sizeEb>  ; TaoCrypt::FileSource::size(bool)
08758a73 +0x033:  mov    (%edi),%ecx
08758a75 +0x035:  mov    -0x24(%ebp),%edx
08758a78 +0x038:  cmp    %ecx,%eax
08758a7a +0x03a:  mov    %eax,%esi
08758a7c +0x03c:  jbe    08758b08 <+0xc8>
08758a82 +0x042:  mov    0x4(%edi),%eax
08758a85 +0x045:  movl   $0x0,-0x1c(%ebp)
08758a8c +0x04c:  mov    %eax,-0x20(%ebp)
08758a8f +0x04f:  xor    %eax,%eax
08758a91 +0x051:  test   %esi,%esi
08758a93 +0x053:  jne    08758b40 <+0x100>
08758a99 +0x059:  mov    %eax,0x8(%esp)
08758a9d +0x05d:  mov    -0x20(%ebp),%eax
08758aa0 +0x060:  mov    %edx,-0x24(%ebp)
08758aa3 +0x063:  mov    %ecx,-0x28(%ebp)
08758aa6 +0x066:  mov    %eax,0x4(%esp)
08758aaa +0x06a:  mov    -0x1c(%ebp),%eax
08758aad +0x06d:  mov    %eax,(%esp)
08758ab0 +0x070:  call   0807d8a0 <_init+0x198>
08758ab5 +0x075:  mov    -0x28(%ebp),%ecx
08758ab8 +0x078:  mov    -0x20(%ebp),%eax
08758abb +0x07b:  movl   $0x0,0x4(%esp)
08758ac3 +0x083:  mov    %ecx,0x8(%esp)
08758ac7 +0x087:  mov    %eax,(%esp)
08758aca +0x08a:  call   0807dcc0 <_init+0x5b8>
08758acf +0x08f:  mov    -0x20(%ebp),%eax
08758ad2 +0x092:  movb   $0x0,0x4(%esp)
08758ad7 +0x097:  mov    %eax,(%esp)
08758ada +0x09a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08758adf +0x09f:  mov    -0x1c(%ebp),%eax
08758ae2 +0x0a2:  mov    (%edi),%ecx
08758ae4 +0x0a4:  mov    %eax,0x4(%edi)
08758ae7 +0x0a7:  mov    %esi,%eax
08758ae9 +0x0a9:  sub    %ecx,%eax
08758aeb +0x0ab:  add    -0x1c(%ebp),%ecx
08758aee +0x0ae:  mov    %eax,0x8(%esp)
08758af2 +0x0b2:  movl   $0x0,0x4(%esp)
08758afa +0x0ba:  mov    %ecx,(%esp)
08758afd +0x0bd:  call   0807dcc0 <_init+0x5b8>
08758b02 +0x0c2:  mov    -0x24(%ebp),%edx
08758b05 +0x0c5:  mov    %esi,(%edi)
08758b07 +0x0c7:  nop
08758b08 +0x0c8:  mov    (%edx),%eax
08758b0a +0x0ca:  mov    %esi,0x8(%esp)
08758b0e +0x0ce:  movl   $0x1,0x4(%esp)
08758b16 +0x0d6:  mov    %eax,0xc(%esp)
08758b1a +0x0da:  mov    0x4(%edi),%eax
08758b1d +0x0dd:  mov    %eax,(%esp)
08758b20 +0x0e0:  call   0807dd50 <_init+0x648>
08758b25 +0x0e5:  mov    -0xc(%ebp),%ebx
08758b28 +0x0e8:  mov    -0x4(%ebp),%edi
08758b2b +0x0eb:  cmp    $0x1,%eax
08758b2e +0x0ee:  mov    $0x0,%eax
08758b33 +0x0f3:  cmovne %eax,%esi
08758b36 +0x0f6:  mov    %esi,%eax
08758b38 +0x0f8:  mov    -0x8(%ebp),%esi
08758b3b +0x0fb:  mov    %ebp,%esp
08758b3d +0x0fd:  pop    %ebp
08758b3e +0x0fe:  ret
08758b3f +0x0ff:  nop
08758b40 +0x100:  mov    %edx,-0x24(%ebp)
08758b43 +0x103:  mov    %ecx,-0x28(%ebp)
08758b46 +0x106:  movb   $0x0,0x4(%esp)
08758b4b +0x10b:  mov    %esi,(%esp)
08758b4e +0x10e:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08758b53 +0x113:  mov    -0x28(%ebp),%ecx
08758b56 +0x116:  mov    -0x24(%ebp),%edx
08758b59 +0x119:  mov    %eax,-0x1c(%ebp)
08758b5c +0x11c:  mov    %ecx,%eax
08758b5e +0x11e:  jmp    08758a99 <+0x59>
08758b63 +0x123:  nop
08758b64 +0x124:  lea    0x0(%esi),%esi
08758b6a +0x12a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::FileSource::get @ 0x8758a40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::get(TaoCrypt::Source&) */

uint __thiscall TaoCrypt::FileSource::get(FileSource *this,Source *param_1)

{
  uint __n;
  void *__src;
  uint __n_00;
  size_t sVar1;
  uint uVar2;
  void *local_20;
  
  uVar2 = 0;
  __n_00 = size(this,false);
  __n = *(uint *)param_1;
  if (__n < __n_00) {
    __src = *(void **)(param_1 + 4);
    local_20 = (void *)0x0;
    sVar1 = 0;
    if (__n_00 != 0) {
      local_20 = operator_new__(__n_00,uVar2 & 0xffffff00);
      sVar1 = __n;
    }
    memcpy(local_20,__src,sVar1);
    uVar2 = 0;
    memset(__src,0,__n);
    operator_delete__(__src,uVar2 & 0xffffff00);
    *(void **)(param_1 + 4) = local_20;
    memset((void *)(*(int *)param_1 + (int)local_20),0,__n_00 - *(int *)param_1);
    *(uint *)param_1 = __n_00;
  }
  sVar1 = fread(*(void **)(param_1 + 4),1,__n_00,*(FILE **)this);
  if (sVar1 != 1) {
    __n_00 = 0;
  }
  return __n_00;
}
```
