# destroy

`_ZN9GameWorld7destroyEv`

`GameWorld::destroy()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c40ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c40ca  _ZN9GameWorld7destroyEv
#           GameWorld::destroy()
# range [0x086c40ca, 0x086c4133]
086c40ca +0x00:  push   %ebp
086c40cb +0x01:  mov    %esp,%ebp
086c40cd +0x03:  push   %ebx
086c40ce +0x04:  sub    $0x14,%esp
086c40d1 +0x07:  mov    0x8(%ebp),%eax
086c40d4 +0x0a:  mov    0x1c(%eax),%eax
086c40d7 +0x0d:  test   %eax,%eax
086c40d9 +0x0f:  je     086c412e <+0x64>
086c40db +0x11:  mov    0x8(%ebp),%eax
086c40de +0x14:  mov    0x1c(%eax),%eax
086c40e1 +0x17:  test   %eax,%eax
086c40e3 +0x19:  je     086c4124 <+0x5a>
086c40e5 +0x1b:  mov    0x8(%ebp),%eax
086c40e8 +0x1e:  mov    0x1c(%eax),%edx
086c40eb +0x21:  mov    0x8(%ebp),%eax
086c40ee +0x24:  mov    0x1c(%eax),%eax
086c40f1 +0x27:  sub    $0x4,%eax
086c40f4 +0x2a:  mov    (%eax),%eax
086c40f6 +0x2c:  imul   $0x34,%eax,%eax
086c40f9 +0x2f:  lea    (%edx,%eax,1),%ebx
086c40fc +0x32:  mov    0x8(%ebp),%eax
086c40ff +0x35:  mov    0x1c(%eax),%eax
086c4102 +0x38:  cmp    %eax,%ebx
086c4104 +0x3a:  je     086c4113 <+0x49>
086c4106 +0x3c:  sub    $0x34,%ebx
086c4109 +0x3f:  mov    %ebx,(%esp)
086c410c +0x42:  call   086c3300 <_ZN7VillageD1Ev>  ; Village::~Village()
086c4111 +0x47:  jmp    086c40fc <+0x32>
086c4113 +0x49:  mov    0x8(%ebp),%eax
086c4116 +0x4c:  mov    0x1c(%eax),%eax
086c4119 +0x4f:  sub    $0x4,%eax
086c411c +0x52:  mov    %eax,(%esp)
086c411f +0x55:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086c4124 +0x5a:  mov    0x8(%ebp),%eax
086c4127 +0x5d:  movl   $0x0,0x1c(%eax)
086c412e +0x64:  add    $0x14,%esp
086c4131 +0x67:  pop    %ebx
086c4132 +0x68:  pop    %ebp
086c4133 +0x69:  ret
```

## 反编译 C

```c
// GameWorld::destroy @ 0x86c40ca

/* GameWorld::destroy() */

void __thiscall GameWorld::destroy(GameWorld *this)

{
  Village *this_00;
  
  if (*(int *)(this + 0x1c) != 0) {
    if (*(int *)(this + 0x1c) != 0) {
      this_00 = (Village *)(*(int *)(this + 0x1c) + *(int *)(*(int *)(this + 0x1c) + -4) * 0x34);
      while (this_00 != *(Village **)(this + 0x1c)) {
        this_00 = this_00 + -0x34;
        Village::~Village(this_00);
      }
      operator_delete__((void *)(*(int *)(this + 0x1c) + -4));
    }
    *(undefined4 *)(this + 0x1c) = 0;
  }
  return;
}
```
