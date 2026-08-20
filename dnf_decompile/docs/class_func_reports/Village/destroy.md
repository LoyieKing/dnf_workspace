# destroy

`_ZN7Village7destroyEv`

`Village::destroy()`

| 类 | 地址 |
|---|---|
| `Village` | `0x086c3348` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3348  _ZN7Village7destroyEv
#           Village::destroy()
# range [0x086c3348, 0x086c33b7]
086c3348 +0x00:  push   %ebp
086c3349 +0x01:  mov    %esp,%ebp
086c334b +0x03:  push   %ebx
086c334c +0x04:  sub    $0x14,%esp
086c334f +0x07:  mov    0x8(%ebp),%eax
086c3352 +0x0a:  mov    0x28(%eax),%eax
086c3355 +0x0d:  test   %eax,%eax
086c3357 +0x0f:  je     086c33b2 <+0x6a>
086c3359 +0x11:  mov    0x8(%ebp),%eax
086c335c +0x14:  mov    0x28(%eax),%eax
086c335f +0x17:  test   %eax,%eax
086c3361 +0x19:  je     086c33a8 <+0x60>
086c3363 +0x1b:  mov    0x8(%ebp),%eax
086c3366 +0x1e:  mov    0x28(%eax),%edx
086c3369 +0x21:  mov    0x8(%ebp),%eax
086c336c +0x24:  mov    0x28(%eax),%eax
086c336f +0x27:  sub    $0x4,%eax
086c3372 +0x2a:  mov    (%eax),%eax
086c3374 +0x2c:  imul   $0x98,%eax,%eax
086c337a +0x32:  lea    (%edx,%eax,1),%ebx
086c337d +0x35:  mov    0x8(%ebp),%eax
086c3380 +0x38:  mov    0x28(%eax),%eax
086c3383 +0x3b:  cmp    %eax,%ebx
086c3385 +0x3d:  je     086c3397 <+0x4f>
086c3387 +0x3f:  sub    $0x98,%ebx
086c338d +0x45:  mov    %ebx,(%esp)
086c3390 +0x48:  call   086d2270 <_GLOBAL__I_MAX_VILLAGE_NUM+0xaa1>  ; global constructors keyed to MAX_VILLAGE_NUM+0xaa1
086c3395 +0x4d:  jmp    086c337d <+0x35>
086c3397 +0x4f:  mov    0x8(%ebp),%eax
086c339a +0x52:  mov    0x28(%eax),%eax
086c339d +0x55:  sub    $0x4,%eax
086c33a0 +0x58:  mov    %eax,(%esp)
086c33a3 +0x5b:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086c33a8 +0x60:  mov    0x8(%ebp),%eax
086c33ab +0x63:  movl   $0x0,0x28(%eax)
086c33b2 +0x6a:  add    $0x14,%esp
086c33b5 +0x6d:  pop    %ebx
086c33b6 +0x6e:  pop    %ebp
086c33b7 +0x6f:  ret
```

## 反编译 C

```c
// Village::destroy @ 0x86c3348

/* Village::destroy() */

void __thiscall Village::destroy(Village *this)

{
  Area *this_00;
  
  if (*(int *)(this + 0x28) != 0) {
    if (*(int *)(this + 0x28) != 0) {
      this_00 = (Area *)(*(int *)(this + 0x28) + *(int *)(*(int *)(this + 0x28) + -4) * 0x98);
      while (this_00 != *(Area **)(this + 0x28)) {
        this_00 = this_00 + -0x98;
        Area::~Area(this_00);
      }
      operator_delete__((void *)(*(int *)(this + 0x28) + -4));
    }
    *(undefined4 *)(this + 0x28) = 0;
  }
  return;
}
```
