# GetSSL_Factory

`_ZN5yaSSL14GetSSL_FactoryEv`

`yaSSL::GetSSL_Factory()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08751120` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08751120  _ZN5yaSSL14GetSSL_FactoryEv
#           yaSSL::GetSSL_Factory()
# range [0x08751120, 0x0875117a]
08751120 +0x00:  push   %ebp
08751121 +0x01:  mov    %esp,%ebp
08751123 +0x03:  push   %ebx
08751124 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08751129 +0x09:  add    $0xc1ba6f,%ebx
0875112f +0x0f:  sub    $0x24,%esp
08751132 +0x12:  mov    0x124c7c(%ebx),%eax
08751138 +0x18:  test   %eax,%eax
0875113a +0x1a:  je     08751148 <+0x28>
0875113c +0x1c:  add    $0x24,%esp
0875113f +0x1f:  pop    %ebx
08751140 +0x20:  pop    %ebp
08751141 +0x21:  ret
08751142 +0x22:  lea    0x0(%esi),%esi
08751148 +0x28:  movb   $0x0,0x4(%esp)
0875114d +0x2d:  movl   $0x30,(%esp)
08751154 +0x34:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751159 +0x39:  mov    %eax,(%esp)
0875115c +0x3c:  mov    %eax,-0xc(%ebp)
0875115f +0x3f:  call   08750780 <_ZN5yaSSL10sslFactoryC1Ev>  ; yaSSL::sslFactory::sslFactory()
08751164 +0x44:  mov    -0xc(%ebp),%eax
08751167 +0x47:  mov    %eax,0x124c7c(%ebx)
0875116d +0x4d:  add    $0x24,%esp
08751170 +0x50:  pop    %ebx
08751171 +0x51:  pop    %ebp
08751172 +0x52:  ret
08751173 +0x53:  nop
08751174 +0x54:  lea    0x0(%esi),%esi
0875117a +0x5a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::GetSSL_Factory @ 0x8751120

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::GetSSL_Factory() */

void yaSSL::GetSSL_Factory(void)

{
  sslFactory *this;
  
  if (sslFactoryInstance != (sslFactory *)0x0) {
    return;
  }
  this = operator_new(0x30,0);
  sslFactory::sslFactory(this);
  sslFactoryInstance = this;
  return;
}
```
