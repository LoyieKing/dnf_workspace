# get_binary

`_ZN6Stream10get_binaryEPvi`

`Stream::get_binary(void*, int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c7fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c7fa  _ZN6Stream10get_binaryEPvi
#           Stream::get_binary(void*, int)
# range [0x0861c7fa, 0x0861c869]
0861c7fa +0x00:  push   %ebp
0861c7fb +0x01:  mov    %esp,%ebp
0861c7fd +0x03:  push   %esi
0861c7fe +0x04:  push   %ebx
0861c7ff +0x05:  sub    $0x10,%esp
0861c802 +0x08:  mov    0x10(%ebp),%eax
0861c805 +0x0b:  mov    %eax,0x4(%esp)
0861c809 +0x0f:  mov    0x8(%ebp),%eax
0861c80c +0x12:  mov    %eax,(%esp)
0861c80f +0x15:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0861c814 +0x1a:  xor    $0x1,%eax
0861c817 +0x1d:  test   %al,%al
0861c819 +0x1f:  je     0861c822 <+0x28>
0861c81b +0x21:  mov    $0x0,%eax
0861c820 +0x26:  jmp    0861c863 <+0x69>
0861c822 +0x28:  mov    0x10(%ebp),%ebx
0861c825 +0x2b:  mov    0x8(%ebp),%eax
0861c828 +0x2e:  mov    0x8(%eax),%esi
0861c82b +0x31:  mov    0x8(%ebp),%eax
0861c82e +0x34:  mov    %eax,(%esp)
0861c831 +0x37:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861c836 +0x3c:  lea    (%esi,%eax,1),%eax
0861c839 +0x3f:  mov    %ebx,0x8(%esp)
0861c83d +0x43:  mov    %eax,0x4(%esp)
0861c841 +0x47:  mov    0xc(%ebp),%eax
0861c844 +0x4a:  mov    %eax,(%esp)
0861c847 +0x4d:  call   0807d8a0 <_init+0x198>
0861c84c +0x52:  mov    0x10(%ebp),%eax
0861c84f +0x55:  mov    %eax,0x4(%esp)
0861c853 +0x59:  mov    0x8(%ebp),%eax
0861c856 +0x5c:  mov    %eax,(%esp)
0861c859 +0x5f:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0861c85e +0x64:  mov    $0x1,%eax
0861c863 +0x69:  add    $0x10,%esp
0861c866 +0x6c:  pop    %ebx
0861c867 +0x6d:  pop    %esi
0861c868 +0x6e:  pop    %ebp
0861c869 +0x6f:  ret
```

## 反编译 C

```c
// Stream::get_binary @ 0x861c7fa

/* Stream::get_binary(void*, int) */

bool __thiscall Stream::get_binary(Stream *this,void *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = enable_out(this,param_2);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    memcpy(param_1,(void *)(iVar1 + iVar3),param_2);
    out_ptr(this,param_2);
  }
  return cVar2 == '\x01';
}
```
