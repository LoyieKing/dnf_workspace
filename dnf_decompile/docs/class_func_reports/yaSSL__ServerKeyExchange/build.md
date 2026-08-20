# build

`_ZN5yaSSL17ServerKeyExchange5buildERNS_3SSLE`

`yaSSL::ServerKeyExchange::build(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x08746f70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746f70  _ZN5yaSSL17ServerKeyExchange5buildERNS_3SSLE
#           yaSSL::ServerKeyExchange::build(yaSSL::SSL&)
# range [0x08746f70, 0x08746fbe]
08746f70 +0x00:  push   %ebp
08746f71 +0x01:  mov    %esp,%ebp
08746f73 +0x03:  sub    $0x18,%esp
08746f76 +0x06:  mov    %esi,-0x4(%ebp)
08746f79 +0x09:  mov    0x8(%ebp),%esi
08746f7c +0x0c:  mov    %ebx,-0x8(%ebp)
08746f7f +0x0f:  mov    0xc(%ebp),%ecx
08746f82 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08746f87 +0x17:  add    $0xc25c11,%ebx
08746f8d +0x1d:  mov    0x8(%esi),%eax
08746f90 +0x20:  mov    (%eax),%edx
08746f92 +0x22:  mov    %ecx,0x4(%esp)
08746f96 +0x26:  mov    %eax,(%esp)
08746f99 +0x29:  call   *0x8(%edx)
08746f9c +0x2c:  mov    0x8(%esi),%eax
08746f9f +0x2f:  mov    (%eax),%edx
08746fa1 +0x31:  mov    %eax,(%esp)
08746fa4 +0x34:  call   *0x10(%edx)
08746fa7 +0x37:  mov    %esi,(%esp)
08746faa +0x3a:  mov    %eax,0x4(%esp)
08746fae +0x3e:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
08746fb3 +0x43:  mov    -0x8(%ebp),%ebx
08746fb6 +0x46:  mov    -0x4(%ebp),%esi
08746fb9 +0x49:  mov    %ebp,%esp
08746fbb +0x4b:  pop    %ebp
08746fbc +0x4c:  ret
08746fbd +0x4d:  nop
08746fbe +0x4e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::build @ 0x8746f70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::build(yaSSL::SSL&) */

void __thiscall yaSSL::ServerKeyExchange::build(ServerKeyExchange *this,SSL *param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(this + 8) + 8))(*(int **)(this + 8),param_1);
  iVar1 = (**(code **)(**(int **)(this + 8) + 0x10))(*(int **)(this + 8));
  HandShakeBase::set_length((HandShakeBase *)this,iVar1);
  return;
}
```
