# operator=

`_ZN5yaSSL11SSL_SESSIONaSERKS0_`

`yaSSL::SSL_SESSION::operator=(yaSSL::SSL_SESSION const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x08752820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752820  _ZN5yaSSL11SSL_SESSIONaSERKS0_
#           yaSSL::SSL_SESSION::operator=(yaSSL::SSL_SESSION const&)
# range [0x08752820, 0x08752939]
08752820 +0x000:  push   %ebp
08752821 +0x001:  mov    %esp,%ebp
08752823 +0x003:  push   %edi
08752824 +0x004:  push   %esi
08752825 +0x005:  push   %ebx
08752826 +0x006:  sub    $0x2c,%esp
08752829 +0x009:  mov    0xc(%ebp),%edi
0875282c +0x00c:  mov    0x8(%ebp),%esi
0875282f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08752834 +0x014:  add    $0xc1a364,%ebx
0875283a +0x01a:  mov    (%edi),%eax
0875283c +0x01c:  lea    0x20(%edi),%edx
0875283f +0x01f:  mov    0x20(%edi),%ecx
08752842 +0x022:  mov    %eax,(%esi)
08752844 +0x024:  mov    0x4(%edi),%eax
08752847 +0x027:  mov    %ecx,0x20(%esi)
0875284a +0x02a:  mov    0x4(%edx),%ecx
0875284d +0x02d:  mov    %eax,0x4(%esi)
08752850 +0x030:  mov    0x8(%edi),%eax
08752853 +0x033:  mov    %eax,0x8(%esi)
08752856 +0x036:  mov    0xc(%edi),%eax
08752859 +0x039:  mov    %eax,0xc(%esi)
0875285c +0x03c:  mov    0x10(%edi),%eax
0875285f +0x03f:  mov    %eax,0x10(%esi)
08752862 +0x042:  mov    0x14(%edi),%eax
08752865 +0x045:  mov    %eax,0x14(%esi)
08752868 +0x048:  mov    0x18(%edi),%eax
0875286b +0x04b:  mov    %eax,0x18(%esi)
0875286e +0x04e:  mov    0x1c(%edi),%eax
08752871 +0x051:  mov    %eax,0x1c(%esi)
08752874 +0x054:  lea    0x20(%esi),%eax
08752877 +0x057:  mov    %ecx,0x4(%eax)
0875287a +0x05a:  mov    0x8(%edx),%ecx
0875287d +0x05d:  mov    %ecx,0x8(%eax)
08752880 +0x060:  mov    0xc(%edx),%ecx
08752883 +0x063:  mov    %ecx,0xc(%eax)
08752886 +0x066:  mov    0x10(%edx),%ecx
08752889 +0x069:  mov    %ecx,0x10(%eax)
0875288c +0x06c:  mov    0x14(%edx),%ecx
0875288f +0x06f:  mov    %ecx,0x14(%eax)
08752892 +0x072:  mov    0x18(%edx),%ecx
08752895 +0x075:  mov    %ecx,0x18(%eax)
08752898 +0x078:  mov    0x1c(%edx),%ecx
0875289b +0x07b:  mov    %ecx,0x1c(%eax)
0875289e +0x07e:  mov    0x20(%edx),%ecx
087528a1 +0x081:  mov    %ecx,0x20(%eax)
087528a4 +0x084:  mov    0x24(%edx),%ecx
087528a7 +0x087:  mov    %ecx,0x24(%eax)
087528aa +0x08a:  mov    0x28(%edx),%ecx
087528ad +0x08d:  mov    %ecx,0x28(%eax)
087528b0 +0x090:  mov    0x2c(%edx),%edx
087528b3 +0x093:  mov    %edx,0x2c(%eax)
087528b6 +0x096:  movzwl 0x50(%edi),%eax
087528ba +0x09a:  mov    %ax,0x50(%esi)
087528be +0x09e:  mov    0x54(%edi),%eax
087528c1 +0x0a1:  mov    %eax,0x54(%esi)
087528c4 +0x0a4:  mov    0x58(%edi),%eax
087528c7 +0x0a7:  mov    %eax,0x58(%esi)
087528ca +0x0aa:  mov    0x60(%esi),%eax
087528cd +0x0ad:  test   %eax,%eax
087528cf +0x0af:  mov    %eax,-0x1c(%ebp)
087528d2 +0x0b2:  je     0875291d <+0xfd>
087528d4 +0x0b4:  add    $0x34,%eax
087528d7 +0x0b7:  mov    %eax,(%esp)
087528da +0x0ba:  call   08750c20 <_ZN5yaSSL12StringHolderD1Ev>  ; yaSSL::StringHolder::~StringHolder()
087528df +0x0bf:  mov    -0x1c(%ebp),%eax
087528e2 +0x0c2:  add    $0x28,%eax
087528e5 +0x0c5:  mov    %eax,(%esp)
087528e8 +0x0c8:  call   08750c20 <_ZN5yaSSL12StringHolderD1Ev>  ; yaSSL::StringHolder::~StringHolder()
087528ed +0x0cd:  mov    -0x1c(%ebp),%eax
087528f0 +0x0d0:  add    $0x14,%eax
087528f3 +0x0d3:  mov    %eax,(%esp)
087528f6 +0x0d6:  call   08750c50 <_ZN5yaSSL9X509_NAMED1Ev>  ; yaSSL::X509_NAME::~X509_NAME()
087528fb +0x0db:  mov    -0x1c(%ebp),%eax
087528fe +0x0de:  mov    %eax,(%esp)
08752901 +0x0e1:  call   08750c50 <_ZN5yaSSL9X509_NAMED1Ev>  ; yaSSL::X509_NAME::~X509_NAME()
08752906 +0x0e6:  mov    -0x1c(%ebp),%eax
08752909 +0x0e9:  movb   $0x0,0x4(%esp)
0875290e +0x0ee:  mov    %eax,(%esp)
08752911 +0x0f1:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752916 +0x0f6:  movl   $0x0,0x60(%esi)
0875291d +0x0fd:  mov    0x60(%edi),%eax
08752920 +0x100:  mov    %esi,(%esp)
08752923 +0x103:  mov    %eax,0x4(%esp)
08752927 +0x107:  call   08752720 <_ZN5yaSSL11SSL_SESSION8CopyX509EPNS_4X509E>  ; yaSSL::SSL_SESSION::CopyX509(yaSSL::X509*)
0875292c +0x10c:  add    $0x2c,%esp
0875292f +0x10f:  mov    %esi,%eax
08752931 +0x111:  pop    %ebx
08752932 +0x112:  pop    %esi
08752933 +0x113:  pop    %edi
08752934 +0x114:  pop    %ebp
08752935 +0x115:  ret
08752936 +0x116:  lea    0x0(%esi),%esi
08752939 +0x119:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::operator= @ 0x8752820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_SESSION::TEMPNAMEPLACEHOLDERVALUE(yaSSL::SSL_SESSION const&) */

SSL_SESSION * __thiscall yaSSL::SSL_SESSION::operator=(SSL_SESSION *this,SSL_SESSION *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  X509_NAME *this_00;
  uint in_stack_ffffffc8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)this = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined2 *)(this + 0x50) = *(undefined2 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  this_00 = *(X509_NAME **)(this + 0x60);
  if (this_00 != (X509_NAME *)0x0) {
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x34));
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x28));
    X509_NAME::~X509_NAME(this_00 + 0x14);
    X509_NAME::~X509_NAME(this_00);
    operator_delete(this_00,in_stack_ffffffc8 & 0xffffff00);
    *(undefined4 *)(this + 0x60) = 0;
  }
  CopyX509(this,*(X509 **)(param_1 + 0x60));
  return this;
}
```
