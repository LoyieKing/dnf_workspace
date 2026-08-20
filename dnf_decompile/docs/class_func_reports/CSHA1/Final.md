# Final

`_ZN5CSHA15FinalEv`

`CSHA1::Final()`

| 类 | 地址 |
|---|---|
| `CSHA1` | `0x0808a2d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a2d2  _ZN5CSHA15FinalEv
#           CSHA1::Final()
# range [0x0808a2d2, 0x0808a3d7]
0808a2d2 +0x000:  push   %ebp
0808a2d3 +0x001:  mov    %esp,%ebp
0808a2d5 +0x003:  push   %esi
0808a2d6 +0x004:  push   %ebx
0808a2d7 +0x005:  sub    $0x20,%esp
0808a2da +0x008:  movl   $0x0,-0xc(%ebp)
0808a2e1 +0x00f:  jmp    0808a315 <+0x43>
0808a2e3 +0x011:  mov    -0xc(%ebp),%eax
0808a2e6 +0x014:  cmpl   $0x3,-0xc(%ebp)
0808a2ea +0x018:  setbe  %dl
0808a2ed +0x01b:  movzbl %dl,%ecx
0808a2f0 +0x01e:  mov    0x8(%ebp),%edx
0808a2f3 +0x021:  add    $0x4,%ecx
0808a2f6 +0x024:  mov    0x4(%edx,%ecx,4),%ebx
0808a2fa +0x028:  mov    -0xc(%ebp),%edx
0808a2fd +0x02b:  not    %edx
0808a2ff +0x02d:  and    $0x3,%edx
0808a302 +0x030:  shl    $0x3,%edx
0808a305 +0x033:  mov    %ebx,%esi
0808a307 +0x035:  mov    %edx,%ecx
0808a309 +0x037:  shr    %cl,%esi
0808a30b +0x039:  mov    %esi,%edx
0808a30d +0x03b:  mov    %dl,-0x14(%ebp,%eax,1)
0808a311 +0x03f:  addl   $0x1,-0xc(%ebp)
0808a315 +0x043:  cmpl   $0x7,-0xc(%ebp)
0808a319 +0x047:  setbe  %al
0808a31c +0x04a:  test   %al,%al
0808a31e +0x04c:  jne    0808a2e3 <+0x11>
0808a320 +0x04e:  mov    $"�",%eax
0808a325 +0x053:  movl   $0x1,0x8(%esp)
0808a32d +0x05b:  mov    %eax,0x4(%esp)
0808a331 +0x05f:  mov    0x8(%ebp),%eax
0808a334 +0x062:  mov    %eax,(%esp)
0808a337 +0x065:  call   0808a19e <_ZN5CSHA16UpdateEPKhj>  ; CSHA1::Update(unsigned char const*, unsigned int)
0808a33c +0x06a:  jmp    0808a35a <+0x88>
0808a33e +0x06c:  mov    $"",%eax
0808a343 +0x071:  movl   $0x1,0x8(%esp)
0808a34b +0x079:  mov    %eax,0x4(%esp)
0808a34f +0x07d:  mov    0x8(%ebp),%eax
0808a352 +0x080:  mov    %eax,(%esp)
0808a355 +0x083:  call   0808a19e <_ZN5CSHA16UpdateEPKhj>  ; CSHA1::Update(unsigned char const*, unsigned int)
0808a35a +0x088:  mov    0x8(%ebp),%eax
0808a35d +0x08b:  mov    0x14(%eax),%eax
0808a360 +0x08e:  and    $0x1f8,%eax
0808a365 +0x093:  cmp    $0x1c0,%eax
0808a36a +0x098:  setne  %al
0808a36d +0x09b:  test   %al,%al
0808a36f +0x09d:  jne    0808a33e <+0x6c>
0808a371 +0x09f:  movl   $0x8,0x8(%esp)
0808a379 +0x0a7:  lea    -0x14(%ebp),%eax
0808a37c +0x0aa:  mov    %eax,0x4(%esp)
0808a380 +0x0ae:  mov    0x8(%ebp),%eax
0808a383 +0x0b1:  mov    %eax,(%esp)
0808a386 +0x0b4:  call   0808a19e <_ZN5CSHA16UpdateEPKhj>  ; CSHA1::Update(unsigned char const*, unsigned int)
0808a38b +0x0b9:  movl   $0x0,-0xc(%ebp)
0808a392 +0x0c0:  jmp    0808a3c5 <+0xf3>
0808a394 +0x0c2:  mov    -0xc(%ebp),%eax
0808a397 +0x0c5:  mov    -0xc(%ebp),%edx
0808a39a +0x0c8:  mov    %edx,%ecx
0808a39c +0x0ca:  shr    $0x2,%ecx
0808a39f +0x0cd:  mov    0x8(%ebp),%edx
0808a3a2 +0x0d0:  mov    (%edx,%ecx,4),%ebx
0808a3a5 +0x0d3:  mov    -0xc(%ebp),%edx
0808a3a8 +0x0d6:  not    %edx
0808a3aa +0x0d8:  and    $0x3,%edx
0808a3ad +0x0db:  shl    $0x3,%edx
0808a3b0 +0x0de:  mov    %ebx,%esi
0808a3b2 +0x0e0:  mov    %edx,%ecx
0808a3b4 +0x0e2:  shr    %cl,%esi
0808a3b6 +0x0e4:  mov    %esi,%edx
0808a3b8 +0x0e6:  mov    %edx,%ecx
0808a3ba +0x0e8:  mov    0x8(%ebp),%edx
0808a3bd +0x0eb:  mov    %cl,0x60(%edx,%eax,1)
0808a3c1 +0x0ef:  addl   $0x1,-0xc(%ebp)
0808a3c5 +0x0f3:  cmpl   $0x13,-0xc(%ebp)
0808a3c9 +0x0f7:  setbe  %al
0808a3cc +0x0fa:  test   %al,%al
0808a3ce +0x0fc:  jne    0808a394 <+0xc2>
0808a3d0 +0x0fe:  add    $0x20,%esp
0808a3d3 +0x101:  pop    %ebx
0808a3d4 +0x102:  pop    %esi
0808a3d5 +0x103:  pop    %ebp
0808a3d6 +0x104:  ret
0808a3d7 +0x105:  nop
```

## 反编译 C

```c
// CSHA1::Final @ 0x808a2d2

/* CSHA1::Final() */

void __thiscall CSHA1::Final(CSHA1 *this)

{
  uchar local_18 [8];
  uint local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    local_18[local_10] =
         (uchar)(*(uint *)(this + ((local_10 < 4) + 4) * 4 + 4) >> (sbyte)((~local_10 & 3) << 3));
  }
  Update(this,&DAT_08af1eb0,1);
  while ((*(uint *)(this + 0x14) & 0x1f8) != 0x1c0) {
    Update(this,"",1);
  }
  Update(this,local_18,8);
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    this[local_10 + 0x60] =
         SUB41(*(uint *)(this + (local_10 & 0xfffffffc)) >> (sbyte)((~local_10 & 3) << 3),0);
  }
  return;
}
```
