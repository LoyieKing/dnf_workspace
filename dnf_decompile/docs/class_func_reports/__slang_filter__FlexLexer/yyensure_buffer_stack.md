# yyensure_buffer_stack

`_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv`

`__slang_filter__FlexLexer::yyensure_buffer_stack()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094ab0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094ab0  _ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv
#           __slang_filter__FlexLexer::yyensure_buffer_stack()
# range [0x08094ab0, 0x08094bed]
08094ab0 +0x000:  push   %ebp
08094ab1 +0x001:  mov    %esp,%ebp
08094ab3 +0x003:  sub    $0x28,%esp
08094ab6 +0x006:  mov    0x8(%ebp),%eax
08094ab9 +0x009:  mov    0x48(%eax),%eax
08094abc +0x00c:  test   %eax,%eax
08094abe +0x00e:  jne    08094b3d <+0x8d>
08094ac0 +0x010:  movl   $0x1,-0x10(%ebp)
08094ac7 +0x017:  mov    -0x10(%ebp),%eax
08094aca +0x01a:  shl    $0x2,%eax
08094acd +0x01d:  mov    %eax,(%esp)
08094ad0 +0x020:  call   08094d75 <_Z21__slang_filter__allocj>  ; __slang_filter__alloc(unsigned int)
08094ad5 +0x025:  mov    %eax,%edx
08094ad7 +0x027:  mov    0x8(%ebp),%eax
08094ada +0x02a:  mov    %edx,0x48(%eax)
08094add +0x02d:  mov    0x8(%ebp),%eax
08094ae0 +0x030:  mov    0x48(%eax),%eax
08094ae3 +0x033:  test   %eax,%eax
08094ae5 +0x035:  jne    08094b01 <+0x51>
08094ae7 +0x037:  mov    0x8(%ebp),%eax
08094aea +0x03a:  mov    (%eax),%eax
08094aec +0x03c:  add    $0x2c,%eax
08094aef +0x03f:  mov    (%eax),%edx
08094af1 +0x041:  movl   $"out of dynamic memory in yyensure_buffer_stack()",0x4(%esp)
08094af9 +0x049:  mov    0x8(%ebp),%eax
08094afc +0x04c:  mov    %eax,(%esp)
08094aff +0x04f:  call   *%edx
08094b01 +0x051:  mov    -0x10(%ebp),%eax
08094b04 +0x054:  lea    0x0(,%eax,4),%edx
08094b0b +0x05b:  mov    0x8(%ebp),%eax
08094b0e +0x05e:  mov    0x48(%eax),%eax
08094b11 +0x061:  mov    %edx,0x8(%esp)
08094b15 +0x065:  movl   $0x0,0x4(%esp)
08094b1d +0x06d:  mov    %eax,(%esp)
08094b20 +0x070:  call   0807dcc0 <_init+0x5b8>
08094b25 +0x075:  mov    -0x10(%ebp),%edx
08094b28 +0x078:  mov    0x8(%ebp),%eax
08094b2b +0x07b:  mov    %edx,0x44(%eax)
08094b2e +0x07e:  mov    0x8(%ebp),%eax
08094b31 +0x081:  movl   $0x0,0x40(%eax)
08094b38 +0x088:  jmp    08094beb <+0x13b>
08094b3d +0x08d:  mov    0x8(%ebp),%eax
08094b40 +0x090:  mov    0x40(%eax),%edx
08094b43 +0x093:  mov    0x8(%ebp),%eax
08094b46 +0x096:  mov    0x44(%eax),%eax
08094b49 +0x099:  sub    $0x1,%eax
08094b4c +0x09c:  cmp    %eax,%edx
08094b4e +0x09e:  jb     08094beb <+0x13b>
08094b54 +0x0a4:  movl   $0x8,-0xc(%ebp)
08094b5b +0x0ab:  mov    0x8(%ebp),%eax
08094b5e +0x0ae:  mov    0x44(%eax),%edx
08094b61 +0x0b1:  mov    -0xc(%ebp),%eax
08094b64 +0x0b4:  lea    (%edx,%eax,1),%eax
08094b67 +0x0b7:  mov    %eax,-0x10(%ebp)
08094b6a +0x0ba:  mov    -0x10(%ebp),%eax
08094b6d +0x0bd:  lea    0x0(,%eax,4),%edx
08094b74 +0x0c4:  mov    0x8(%ebp),%eax
08094b77 +0x0c7:  mov    0x48(%eax),%eax
08094b7a +0x0ca:  mov    %edx,0x4(%esp)
08094b7e +0x0ce:  mov    %eax,(%esp)
08094b81 +0x0d1:  call   08094d88 <_Z23__slang_filter__reallocPvj>  ; __slang_filter__realloc(void*, unsigned int)
08094b86 +0x0d6:  mov    %eax,%edx
08094b88 +0x0d8:  mov    0x8(%ebp),%eax
08094b8b +0x0db:  mov    %edx,0x48(%eax)
08094b8e +0x0de:  mov    0x8(%ebp),%eax
08094b91 +0x0e1:  mov    0x48(%eax),%eax
08094b94 +0x0e4:  test   %eax,%eax
08094b96 +0x0e6:  jne    08094bb2 <+0x102>
08094b98 +0x0e8:  mov    0x8(%ebp),%eax
08094b9b +0x0eb:  mov    (%eax),%eax
08094b9d +0x0ed:  add    $0x2c,%eax
08094ba0 +0x0f0:  mov    (%eax),%edx
08094ba2 +0x0f2:  movl   $"out of dynamic memory in yyensure_buffer_stack()",0x4(%esp)
08094baa +0x0fa:  mov    0x8(%ebp),%eax
08094bad +0x0fd:  mov    %eax,(%esp)
08094bb0 +0x100:  call   *%edx
08094bb2 +0x102:  mov    -0xc(%ebp),%eax
08094bb5 +0x105:  lea    0x0(,%eax,4),%edx
08094bbc +0x10c:  mov    0x8(%ebp),%eax
08094bbf +0x10f:  mov    0x48(%eax),%ecx
08094bc2 +0x112:  mov    0x8(%ebp),%eax
08094bc5 +0x115:  mov    0x44(%eax),%eax
08094bc8 +0x118:  shl    $0x2,%eax
08094bcb +0x11b:  lea    (%ecx,%eax,1),%eax
08094bce +0x11e:  mov    %edx,0x8(%esp)
08094bd2 +0x122:  movl   $0x0,0x4(%esp)
08094bda +0x12a:  mov    %eax,(%esp)
08094bdd +0x12d:  call   0807dcc0 <_init+0x5b8>
08094be2 +0x132:  mov    -0x10(%ebp),%edx
08094be5 +0x135:  mov    0x8(%ebp),%eax
08094be8 +0x138:  mov    %edx,0x44(%eax)
08094beb +0x13b:  leave
08094bec +0x13c:  ret
08094bed +0x13d:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yyensure_buffer_stack @ 0x8094ab0

/* __slang_filter__FlexLexer::yyensure_buffer_stack() */

void __thiscall __slang_filter__FlexLexer::yyensure_buffer_stack(__slang_filter__FlexLexer *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x48) == 0) {
    uVar2 = __slang_filter__alloc(4);
    *(undefined4 *)(this + 0x48) = uVar2;
    if (*(int *)(this + 0x48) == 0) {
      (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yyensure_buffer_stack()");
    }
    memset(*(void **)(this + 0x48),0,4);
    *(undefined4 *)(this + 0x44) = 1;
    *(undefined4 *)(this + 0x40) = 0;
  }
  else if (*(int *)(this + 0x44) - 1U <= *(uint *)(this + 0x40)) {
    iVar1 = *(int *)(this + 0x44);
    uVar2 = __slang_filter__realloc(*(void **)(this + 0x48),(iVar1 + 8) * 4);
    *(undefined4 *)(this + 0x48) = uVar2;
    if (*(int *)(this + 0x48) == 0) {
      (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yyensure_buffer_stack()");
    }
    memset((void *)(*(int *)(this + 0x48) + *(int *)(this + 0x44) * 4),0,0x20);
    *(int *)(this + 0x44) = iVar1 + 8;
  }
  return;
}
```
