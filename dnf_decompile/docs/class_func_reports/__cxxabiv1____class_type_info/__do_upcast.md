# __do_upcast

`_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PPv`

`__cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__class_type_info` | `0x08724900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724900  _ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PPv
#           __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const
# range [0x08724900, 0x0872496f]
08724900 +0x00:  push   %ebp
08724901 +0x01:  mov    %esp,%ebp
08724903 +0x03:  push   %esi
08724904 +0x04:  sub    $0x24,%esp
08724907 +0x07:  mov    0x8(%ebp),%eax
0872490a +0x0a:  mov    0x10(%ebp),%esi
0872490d +0x0d:  lea    -0x18(%ebp),%ecx
08724910 +0x10:  movl   $0x0,-0x18(%ebp)
08724917 +0x17:  movl   $0x0,-0x14(%ebp)
0872491e +0x1e:  mov    (%eax),%edx
08724920 +0x20:  mov    %ecx,0xc(%esp)
08724924 +0x24:  mov    (%esi),%ecx
08724926 +0x26:  movl   $0x10,-0x10(%ebp)
0872492d +0x2d:  movl   $0x0,-0xc(%ebp)
08724934 +0x34:  mov    %eax,(%esp)
08724937 +0x37:  mov    %ecx,0x8(%esp)
0872493b +0x3b:  mov    0xc(%ebp),%ecx
0872493e +0x3e:  mov    %ecx,0x4(%esp)
08724942 +0x42:  call   *0x18(%edx)
08724945 +0x45:  mov    -0x14(%ebp),%edx
08724948 +0x48:  xor    %eax,%eax
0872494a +0x4a:  and    $0x6,%edx
0872494d +0x4d:  cmp    $0x6,%edx
08724950 +0x50:  jne    0872495c <+0x5c>
08724952 +0x52:  mov    -0x18(%ebp),%eax
08724955 +0x55:  mov    %eax,(%esi)
08724957 +0x57:  mov    $0x1,%eax
0872495c +0x5c:  add    $0x24,%esp
0872495f +0x5f:  pop    %esi
08724960 +0x60:  pop    %ebp
08724961 +0x61:  ret
08724962 +0x62:  nop
08724963 +0x63:  nop
08724964 +0x64:  nop
08724965 +0x65:  nop
08724966 +0x66:  nop
08724967 +0x67:  nop
08724968 +0x68:  nop
08724969 +0x69:  nop
0872496a +0x6a:  nop
0872496b +0x6b:  nop
0872496c +0x6c:  nop
0872496d +0x6d:  nop
0872496e +0x6e:  nop
0872496f +0x6f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__class_type_info::__do_upcast @ 0x8724900

/* __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const */

bool __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void **param_2)

{
  bool bVar1;
  void *local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0x10;
  local_10 = 0;
  (**(code **)(*(int *)this + 0x18))(this,param_1,*param_2,&local_1c);
  bVar1 = (local_18 & 6) == 6;
  if (bVar1) {
    *param_2 = local_1c;
  }
  return bVar1;
}
```
