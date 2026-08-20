# set_acc_info

`_ZN5CUser12set_acc_infoEjPKc`

`CUser::set_acc_info(unsigned int, char const*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08649bfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08649bfc  _ZN5CUser12set_acc_infoEjPKc
#           CUser::set_acc_info(unsigned int, char const*)
# range [0x08649bfc, 0x08649c69]
08649bfc +0x00:  push   %ebp
08649bfd +0x01:  mov    %esp,%ebp
08649bff +0x03:  sub    $0x28,%esp
08649c02 +0x06:  mov    0x8(%ebp),%eax
08649c05 +0x09:  mov    0xc(%ebp),%edx
08649c08 +0x0c:  mov    %edx,0x704ac(%eax)
08649c0e +0x12:  movl   $0x14,-0x14(%ebp)
08649c15 +0x19:  mov    0x10(%ebp),%eax
08649c18 +0x1c:  mov    %eax,(%esp)
08649c1b +0x1f:  call   0807e3b0 <_init+0xca8>
08649c20 +0x24:  mov    %eax,-0x10(%ebp)
08649c23 +0x27:  lea    -0x14(%ebp),%eax
08649c26 +0x2a:  mov    %eax,0x4(%esp)
08649c2a +0x2e:  lea    -0x10(%ebp),%eax
08649c2d +0x31:  mov    %eax,(%esp)
08649c30 +0x34:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08649c35 +0x39:  mov    (%eax),%eax
08649c37 +0x3b:  mov    %eax,-0xc(%ebp)
08649c3a +0x3e:  mov    0x8(%ebp),%eax
08649c3d +0x41:  lea    0x704b0(%eax),%edx
08649c43 +0x47:  movl   $0x14,0x8(%esp)
08649c4b +0x4f:  mov    0x10(%ebp),%eax
08649c4e +0x52:  mov    %eax,0x4(%esp)
08649c52 +0x56:  mov    %edx,(%esp)
08649c55 +0x59:  call   0807d8d0 <_init+0x1c8>
08649c5a +0x5e:  mov    -0xc(%ebp),%eax
08649c5d +0x61:  mov    0x8(%ebp),%edx
08649c60 +0x64:  movb   $0x0,0x704b0(%edx,%eax,1)
08649c68 +0x6c:  leave
08649c69 +0x6d:  ret
```

## 反编译 C

```c
// CUser::set_acc_info @ 0x8649bfc

/* CUser::set_acc_info(unsigned int, char const*) */

void __thiscall CUser::set_acc_info(CUser *this,uint param_1,char *param_2)

{
  int *piVar1;
  int local_18;
  size_t local_14;
  int local_10;
  
  *(uint *)(this + 0x704ac) = param_1;
  local_18 = 0x14;
  local_14 = strlen(param_2);
  piVar1 = std::min<int>((int *)&local_14,&local_18);
  local_10 = *piVar1;
  strncpy((char *)(this + 0x704b0),param_2,0x14);
  this[local_10 + 0x704b0] = (CUser)0x0;
  return;
}
```
