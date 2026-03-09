/**
 * wm_strings_en.h  — Terminal Embedded OS Theme
 * Drop-in replacement for WiFiManager captive portal UI
 *
 * Design: Dark glassmorphism · Share Tech Mono · Cyan accent
 * Compatible: ESP32 / ESP8266 · WiFiManager v2.0.x
 *
 * Usage: Replace <WiFiManagerLibrary>/wm_strings_en.h
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS

#include "wm_consts_en.h"

const char WM_LANGUAGE[] PROGMEM = "en-US";

/* ─────────────────────────────────────────────────────────────
   HEAD — Google Fonts + meta
   ───────────────────────────────────────────────────────────── */
const char HTTP_HEAD_START[] PROGMEM =
  "<!DOCTYPE html><html lang='en'><head>"
  "<meta name='format-detection' content='telephone=no'>"
  "<meta charset='UTF-8'>"
  "<meta name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
  "<link rel='preconnect' href='https://fonts.googleapis.com'>"
  "<link href='https://fonts.googleapis.com/css2?family=Share+Tech+Mono&family=Exo+2:wght@300;400;600;700&display=swap' rel='stylesheet'>"
  "<title>{v}</title>";

/* ─────────────────────────────────────────────────────────────
   STYLE — Terminal Embedded OS
   ───────────────────────────────────────────────────────────── */
const char HTTP_STYLE[] PROGMEM =
  "<style>"
  ":root{"
    "--bg:#030b12;--bg2:#071420;"
    "--glass:rgba(6,22,38,.72);"
    "--border:rgba(0,200,255,.18);--border2:rgba(0,200,255,.08);"
    "--cyan:#00c8ff;--cyan-dim:rgba(0,200,255,.55);"
    "--cyan-glow:rgba(0,200,255,.12);"
    "--green:#00ff9d;--red:#ff3b5c;--yellow:#ffd23f;"
    "--text:#c8e8f8;--text-dim:rgba(180,220,240,.5);"
    "--mono:'Share Tech Mono',monospace;"
    "--ui:'Exo 2',sans-serif;"
    "--r:8px;--rl:14px;}"
  "*,*::before,*::after{box-sizing:border-box;margin:0;padding:0}"
  "html{height:100%}"
  "body{"
    "min-height:100vh;background:var(--bg);"
    "background-image:radial-gradient(ellipse 80% 60% at 50% -10%,rgba(0,120,200,.18) 0%,transparent 70%),"
      "radial-gradient(ellipse 40% 40% at 90% 80%,rgba(0,200,255,.06) 0%,transparent 60%);"
    "color:var(--text);font-family:var(--ui);font-weight:300;overflow-x:hidden}"
  "body::before{"
    "content:'';position:fixed;inset:0;"
    "background:repeating-linear-gradient(0deg,transparent,transparent 2px,rgba(0,0,0,.06) 2px,rgba(0,0,0,.06) 4px);"
    "pointer-events:none;z-index:9999}"
  ".wrap{max-width:520px;margin:0 auto;padding:16px 12px 40px;animation:fadeIn .5s ease both}"
  "@keyframes fadeIn{from{opacity:0;transform:translateY(12px)}to{opacity:1;transform:translateY(0)}}"
  /* header */
  ".hdr{"
    "display:flex;align-items:center;gap:12px;"
    "padding:14px 18px;"
    "background:var(--glass);border:1px solid var(--border);"
    "border-radius:var(--rl);margin-bottom:14px;"
    "backdrop-filter:blur(18px);position:relative;overflow:hidden}"
  ".hdr::before{content:'';position:absolute;top:0;left:0;right:0;height:1px;"
    "background:linear-gradient(90deg,transparent,var(--cyan),transparent);opacity:.6}"
  ".hdr-logo{"
    "width:38px;height:38px;border:1.5px solid var(--cyan-dim);"
    "border-radius:8px;display:grid;place-items:center;"
    "flex-shrink:0;background:var(--cyan-glow)}"
  ".hdr-logo svg{width:20px;height:20px;color:var(--cyan)}"
  ".hdr-info{flex:1;min-width:0}"
  ".hdr-title{font-family:var(--mono);font-size:12px;color:var(--cyan);letter-spacing:.12em;text-transform:uppercase}"
  ".hdr-sub{font-size:11px;color:var(--text-dim);font-family:var(--mono);margin-top:2px;white-space:nowrap;overflow:hidden;text-overflow:ellipsis}"
  ".hdr-status{display:flex;align-items:center;gap:7px;font-family:var(--mono);font-size:11px;color:var(--green);flex-shrink:0}"
  ".dot{width:8px;height:8px;border-radius:50%;background:var(--green);box-shadow:0 0 6px var(--green);animation:pulse 2s ease infinite}"
  "@keyframes pulse{0%,100%{opacity:1;box-shadow:0 0 6px var(--green)}50%{opacity:.5;box-shadow:0 0 2px var(--green)}}"
  /* tabs */
  ".tabs{"
    "display:grid;grid-template-columns:repeat(4,1fr);gap:4px;"
    "background:var(--glass);border:1px solid var(--border);"
    "border-radius:var(--r);padding:4px;margin-bottom:14px;"
    "backdrop-filter:blur(18px)}"
  ".tab{"
    "padding:9px 4px;text-align:center;"
    "font-family:var(--mono);font-size:11px;letter-spacing:.06em;"
    "color:var(--text-dim);cursor:pointer;border-radius:5px;"
    "transition:all .2s;user-select:none;border:1px solid transparent}"
  ".tab:hover{color:var(--cyan);background:var(--cyan-glow)}"
  ".tab.active{color:var(--bg);background:var(--cyan);border-color:var(--cyan);font-weight:600;box-shadow:0 0 14px rgba(0,200,255,.3)}"
  /* panels */
  ".panel{display:none;animation:slideIn .25s ease both}"
  ".panel.active{display:block}"
  "@keyframes slideIn{from{opacity:0;transform:translateY(6px)}to{opacity:1;transform:translateY(0)}}"
  /* card */
  ".card{"
    "background:var(--glass);border:1px solid var(--border);"
    "border-radius:var(--rl);padding:18px;margin-bottom:12px;"
    "backdrop-filter:blur(18px);position:relative;overflow:hidden;"
    "animation:fadeIn .35s ease both}"
  ".card::before{content:'';position:absolute;top:0;left:0;right:0;height:1px;"
    "background:linear-gradient(90deg,transparent,rgba(0,200,255,.4),transparent)}"
  ".card-title{"
    "font-family:var(--mono);font-size:10px;letter-spacing:.2em;"
    "color:var(--cyan-dim);text-transform:uppercase;margin-bottom:14px;"
    "display:flex;align-items:center;gap:8px}"
  ".card-title::after{content:'';flex:1;height:1px;background:var(--border)}"
  /* network list */
  ".nl{display:flex;flex-direction:column;gap:6px}"
  ".ni{"
    "display:flex;align-items:center;gap:12px;padding:11px 14px;"
    "background:rgba(0,200,255,.04);border:1px solid var(--border2);"
    "border-radius:var(--r);cursor:pointer;transition:all .18s;"
    "position:relative;overflow:hidden;animation:fadeIn .35s ease both}"
  ".ni:hover{background:rgba(0,200,255,.1);border-color:var(--border);transform:translateX(2px)}"
  ".ni.sel{background:rgba(0,200,255,.12);border-color:var(--cyan-dim)}"
  ".sig{display:flex;align-items:flex-end;gap:2px;height:16px;flex-shrink:0}"
  ".sig span{width:4px;border-radius:1px;background:var(--border)}"
  ".sig span.on{background:var(--cyan)}"
  ".sig span:nth-child(1){height:4px}.sig span:nth-child(2){height:7px}"
  ".sig span:nth-child(3){height:11px}.sig span:nth-child(4){height:16px}"
  ".ni-info{flex:1;min-width:0}"
  ".ni-ssid{font-size:13px;font-weight:600;color:var(--text);white-space:nowrap;overflow:hidden;text-overflow:ellipsis}"
  ".ni-meta{font-family:var(--mono);font-size:10px;color:var(--text-dim);margin-top:2px}"
  ".ni-enc{font-family:var(--mono);font-size:9px;padding:2px 7px;border-radius:20px;border:1px solid;flex-shrink:0}"
  ".wpa{color:var(--yellow);border-color:rgba(255,210,63,.3);background:rgba(255,210,63,.07)}"
  ".opn{color:var(--green);border-color:rgba(0,255,157,.3);background:rgba(0,255,157,.07)}"
  /* form */
  ".fg{margin-bottom:14px}"
  "label{display:block;font-family:var(--mono);font-size:10px;letter-spacing:.15em;color:var(--cyan-dim);text-transform:uppercase;margin-bottom:7px}"
  "input[type=text],input[type=password]{"
    "width:100%;background:rgba(0,200,255,.05);border:1px solid var(--border);"
    "border-radius:var(--r);padding:11px 14px;font-family:var(--mono);"
    "font-size:13px;color:var(--text);outline:none;transition:all .2s;caret-color:var(--cyan)}"
  "input:focus{border-color:var(--cyan-dim);background:rgba(0,200,255,.09);box-shadow:0 0 0 3px rgba(0,200,255,.08)}"
  "input::placeholder{color:rgba(180,220,240,.25)}"
  ".iw{position:relative}"
  ".iw input{padding-right:44px}"
  ".eye{position:absolute;right:0;top:0;bottom:0;width:42px;display:grid;place-items:center;"
    "cursor:pointer;color:var(--text-dim);transition:color .2s;background:none;border:none;font-size:16px}"
  ".eye:hover{color:var(--cyan)}"
  /* buttons */
  ".btn{display:block;width:100%;padding:12px;background:linear-gradient(135deg,rgba(0,200,255,.9),rgba(0,150,220,.9));"
    "border:none;border-radius:var(--r);font-family:var(--mono);font-size:13px;font-weight:700;"
    "letter-spacing:.12em;color:var(--bg);cursor:pointer;text-transform:uppercase;"
    "transition:all .2s;text-align:center;text-decoration:none;box-shadow:0 4px 20px rgba(0,200,255,.2)}"
  ".btn:hover{background:linear-gradient(135deg,rgba(0,220,255,1),rgba(0,180,240,1));box-shadow:0 4px 28px rgba(0,200,255,.35);transform:translateY(-1px)}"
  ".btn:active{transform:translateY(0);opacity:.8}"
  ".btn-g{background:transparent;border:1px solid var(--border);color:var(--text-dim);box-shadow:none}"
  ".btn-g:hover{border-color:var(--cyan-dim);color:var(--cyan);background:var(--cyan-glow);box-shadow:none;transform:none}"
  ".btn-d{background:linear-gradient(135deg,rgba(255,59,92,.8),rgba(200,20,50,.8));color:#fff;box-shadow:0 4px 20px rgba(255,59,92,.2)}"
  ".btn-sm{padding:8px 16px;font-size:11px;width:auto;display:inline-block}"
  /* collapsible static ip */
  ".coll-h{display:flex;align-items:center;justify-content:space-between;cursor:pointer;"
    "padding:10px 14px;border:1px solid var(--border2);border-radius:var(--r);"
    "background:rgba(0,200,255,.03);margin-bottom:8px;transition:all .2s}"
  ".coll-h:hover{border-color:var(--border);background:var(--cyan-glow)}"
  ".coll-h span:first-child{font-family:var(--mono);font-size:11px;color:var(--text-dim);letter-spacing:.1em}"
  ".chev{color:var(--text-dim);transition:transform .25s;font-size:12px}"
  ".coll-h.open .chev{transform:rotate(180deg);color:var(--cyan)}"
  ".coll-b{max-height:0;overflow:hidden;transition:max-height .3s ease}"
  ".coll-b.open{max-height:300px}"
  /* status bar */
  ".sb{padding:11px 16px;border-radius:var(--r);margin-bottom:12px;font-family:var(--mono);"
    "font-size:12px;border-left:3px solid;display:flex;align-items:center;gap:10px}"
  ".sb.C{background:rgba(0,255,157,.07);border-color:var(--green);color:var(--green)}"
  ".sb.D{background:rgba(255,59,92,.07);border-color:var(--red);color:var(--red)}"
  ".sb.P{background:rgba(0,200,255,.07);border-color:var(--cyan);color:var(--cyan)}"
  ".sb.N{background:rgba(180,220,240,.05);border-color:rgba(180,220,240,.2);color:var(--text-dim)}"
  /* info */
  ".ig{display:grid;gap:1px}"
  ".ir{display:flex;align-items:center;padding:9px 0;border-bottom:1px solid var(--border2);gap:12px}"
  ".ir:last-child{border-bottom:none}"
  ".ik{font-family:var(--mono);font-size:10px;color:var(--text-dim);letter-spacing:.08em;min-width:120px;flex-shrink:0}"
  ".iv{font-family:var(--mono);font-size:12px;color:var(--text);word-break:break-all}"
  ".iv.hl{color:var(--cyan)}.iv.ok{color:var(--green)}"
  ".pbar{height:4px;background:var(--border2);border-radius:2px;overflow:hidden;margin-top:5px}"
  ".pb-fill{height:100%;background:linear-gradient(90deg,var(--cyan),var(--green));border-radius:2px}"
  /* menu grid */
  ".mg{display:grid;grid-template-columns:1fr 1fr;gap:8px}"
  ".mb{display:flex;flex-direction:column;align-items:center;gap:8px;padding:16px 12px;"
    "background:rgba(0,200,255,.04);border:1px solid var(--border2);border-radius:var(--r);"
    "cursor:pointer;transition:all .2s;font-family:var(--mono);font-size:11px;"
    "color:var(--text-dim);letter-spacing:.08em;text-transform:uppercase;"
    "text-decoration:none;text-align:center}"
  ".mb:hover{background:rgba(0,200,255,.1);border-color:var(--border);color:var(--cyan);transform:translateY(-2px)}"
  ".mb.dx:hover{color:var(--red);border-color:rgba(255,59,92,.3);background:rgba(255,59,92,.07)}"
  ".mb svg{width:22px;height:22px}"
  /* toast */
  ".toast{position:fixed;bottom:24px;left:50%;transform:translateX(-50%) translateY(80px);"
    "background:var(--glass);border:1px solid var(--border);border-radius:var(--r);"
    "padding:12px 22px;font-family:var(--mono);font-size:12px;color:var(--cyan);"
    "backdrop-filter:blur(20px);transition:transform .3s cubic-bezier(.34,1.56,.64,1);"
    "z-index:1000;white-space:nowrap}"
  ".toast.show{transform:translateX(-50%) translateY(0)}"
  /* misc */
  ".row{display:flex;align-items:center;justify-content:space-between;gap:10px;margin-bottom:12px}"
  ".h{display:none}"
  /* scrollbar */
  "::-webkit-scrollbar{width:4px}::-webkit-scrollbar-track{background:transparent}"
  "::-webkit-scrollbar-thumb{background:var(--border);border-radius:2px}"
  "@media(max-width:380px){.tab{font-size:10px;padding:8px 2px}.wrap{padding:10px 8px 32px}}"
  "</style>";

/* ─────────────────────────────────────────────────────────────
   SCRIPT
   ───────────────────────────────────────────────────────────── */
const char HTTP_SCRIPT[] PROGMEM =
  "<script>"
  /* network click — fill ssid, focus password */
  "function c(l,enc){"
    "document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
    "var p=document.getElementById('p');"
    "p.disabled=!enc;"
    "document.querySelectorAll('.ni').forEach(function(e){e.classList.remove('sel');});"
    "l.closest('.ni').classList.add('sel');"
    "if(enc)p.focus();"
  "}"
  /* password toggle */
  "function f(){"
    "var x=document.getElementById('p'),i=document.getElementById('ei');"
    "x.type==='password'?(x.type='text',i.textContent='\\uD83D\\uDD12'):(x.type='password',i.textContent='\\uD83D\\uDC41');"
  "}"
  /* tab switch */
  "function st(id){"
    "var ids=['wifi','params','info','menu'];"
    "document.querySelectorAll('.tab').forEach(function(t,i){t.classList.toggle('active',ids[i]===id);});"
    "document.querySelectorAll('.panel').forEach(function(p){p.classList.remove('active');});"
    "document.getElementById('t-'+id).classList.add('active');"
  "}"
  /* static ip collapsible */
  "function ts(){"
    "var h=document.getElementById('sh'),b=document.getElementById('sb2');"
    "h.classList.toggle('open');b.classList.toggle('open');"
    "h.querySelector('span').textContent=h.classList.contains('open')?'\\u25BE STATIC IP':'\\u25B8 STATIC IP';"
  "}"
  /* toast */
  "var _tt;"
  "function toast(m,d){"
    "var t=document.getElementById('toast');t.textContent=m;t.classList.add('show');"
    "clearTimeout(_tt);_tt=setTimeout(function(){t.classList.remove('show');},d||3000);"
  "}"
  "</script>";

/* ─────────────────────────────────────────────────────────────
   HEAD END — opens body + wrap
   ───────────────────────────────────────────────────────────── */
const char HTTP_HEAD_END[] PROGMEM =
  "</head><body class='{c}'>"
  "<div class='wrap'>"
  /* Portal header */
  "<div class='hdr'>"
    "<div class='hdr-logo'>"
      "<svg viewBox='0 0 24 24' fill='none' stroke='currentColor' stroke-width='1.8'>"
        "<path d='M5 12.55a11 11 0 0 1 14.08 0M1.42 9a16 16 0 0 1 21.16 0M8.53 16.11a6 6 0 0 1 6.95 0M12 20h.01'/>"
      "</svg>"
    "</div>"
    "<div class='hdr-info'>"
      "<div class='hdr-title'>ESP32 // NET_CONFIG</div>"
      "<div class='hdr-sub'>{v}</div>"
    "</div>"
    "<div class='hdr-status'><div class='dot'></div><span>AP</span></div>"
  "</div>"
  /* Tabs */
  "<div class='tabs'>"
    "<div class='tab active' onclick=\"st('wifi')\">WIFI</div>"
    "<div class='tab' onclick=\"st('params')\">PARAMS</div>"
    "<div class='tab' onclick=\"st('info')\">INFO</div>"
    "<div class='tab' onclick=\"st('menu')\">MENU</div>"
  "</div>"
  /* WiFi panel open */
  "<div class='panel active' id='t-wifi'>";

/* ─────────────────────────────────────────────────────────────
   ROOT MAIN — heading inside wifi panel (used by handleRoot)
   ───────────────────────────────────────────────────────────── */
const char HTTP_ROOT_MAIN[] PROGMEM = "<h1 style='display:none'>{t}</h1>";

/* Portal options (legacy, kept empty — menu replaces this) */
const char HTTP_PORTAL_OPTIONS[] PROGMEM = "";

/* ─────────────────────────────────────────────────────────────
   MENU ITEMS
   ───────────────────────────────────────────────────────────── */
const char * const HTTP_PORTAL_MENU[] PROGMEM = {
  /* 0 WIFI */
  "<div class='card'><div class='card-title'>WIFI</div>"
  "<a class='mb' style='width:100%;flex-direction:row;justify-content:flex-start;gap:12px' href='/wifi'>"
    "<svg width='20' height='20' viewBox='0 0 24 24' fill='none' stroke='currentColor' stroke-width='1.8'>"
      "<path d='M5 12.55a11 11 0 0 1 14.08 0M1.42 9a16 16 0 0 1 21.16 0M8.53 16.11a6 6 0 0 1 6.95 0M12 20h.01'/>"
    "</svg>Configure WiFi</a></div>\n",
  /* 1 WIFINOSCAN */
  "<a class='mb btn-g btn-sm' href='/0wifi'>WiFi (No Scan)</a><br/>\n",
  /* 2 INFO */
  "<a class='mb' style='width:100%;flex-direction:row;justify-content:flex-start;gap:12px' href='/info'>"
    "<svg width='20' height='20' viewBox='0 0 24 24' fill='none' stroke='currentColor' stroke-width='1.8'>"
      "<circle cx='12' cy='12' r='10'/><line x1='12' y1='16' x2='12' y2='12'/><line x1='12' y1='8' x2='12.01' y2='8'/>"
    "</svg>System Info</a>\n",
  /* 3 PARAM */
  "<a class='mb' style='width:100%;flex-direction:row;justify-content:flex-start;gap:12px' href='/param'>"
    "<svg width='20' height='20' viewBox='0 0 24 24' fill='none' stroke='currentColor' stroke-width='1.8'>"
      "<circle cx='12' cy='12' r='3'/><path d='M19.07 4.93l-1.41 1.41M4.93 4.93l1.41 1.41M12 2v2m0 16v2m7.07-4.93l-1.41-1.41M4.93 19.07l1.41-1.41M20 12h2M2 12h2'/>"
    "</svg>Parameters</a>\n",
  /* 4 CLOSE */
  "<form action='/close' method='get'><button class='btn btn-g btn-sm'>Close</button></form><br/>\n",
  /* 5 RESTART */
  "<form action='/restart' method='get'><button class='btn btn-g btn-sm'>&#8635; Restart</button></form><br/>\n",
  /* 6 EXIT */
  "<form action='/exit' method='get'><button class='btn btn-g btn-sm'>Exit Portal</button></form><br/>\n",
  /* 7 ERASE */
  "<form action='/erase' method='get'><button class='btn btn-d btn-sm'>&#215; Erase Config</button></form><br/>\n",
  /* 8 UPDATE */
  "<form action='/update' method='get'><button class='btn btn-g btn-sm'>&#8593; OTA Update</button></form><br/>\n",
  /* 9 SEP */
  "<div style='height:1px;background:var(--border2);margin:10px 0'></div>\n"
};

/* ─────────────────────────────────────────────────────────────
   NETWORK SCAN ITEMS
   ───────────────────────────────────────────────────────────── */
const char HTTP_ITEM_QI[] PROGMEM =
  "<div class='sig'>"
    "<span class='{h}'></span>"
    "<span class='{h}'></span>"
    "<span class='{h}'></span>"
    "<span class='{h}'></span>"
  "</div>";

const char HTTP_ITEM_QP[] PROGMEM = "<span class='ni-meta'>{r}%</span>";

const char HTTP_ITEM[] PROGMEM =
  "<div class='ni' onclick='c(this.querySelector(\"a\"),{i})'>"
    "<div class='sig'>{qi}</div>"
    "<div class='ni-info'>"
      "<a href='#p' data-ssid='{V}' class='ni-ssid' style='color:inherit;font-weight:600'>{v}</a>"
      "<div class='ni-meta'>{r}%&nbsp;&middot;&nbsp;{R} dBm</div>"
    "</div>"
    "<span class='ni-enc wpa'>{e}</span>"
  "</div>\n";

/* ─────────────────────────────────────────────────────────────
   WIFI FORM
   ───────────────────────────────────────────────────────────── */
const char HTTP_FORM_START[] PROGMEM =
  "<div class='card' style='margin-top:12px'>"
  "<div class='card-title'>CREDENTIALS</div>"
  "<form method='POST' action='{v}'>";

const char HTTP_FORM_WIFI[] PROGMEM =
  "<div class='fg'>"
    "<label for='s'>SSID</label>"
    "<input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'>"
  "</div>"
  "<div class='fg'>"
    "<label for='p'>PASSWORD</label>"
    "<div class='iw'>"
      "<input id='p' name='p' maxlength='64' type='password' placeholder='{p}'>"
      "<button type='button' class='eye' onclick='f()' title='Toggle'><span id='ei'>&#128065;</span></button>"
    "</div>"
  "</div>";

const char HTTP_FORM_WIFI_END[] PROGMEM = "";

const char HTTP_FORM_STATIC_HEAD[] PROGMEM =
  "<div id='sh' class='coll-h' onclick='ts()'>"
    "<span>&#9658; STATIC IP</span>"
    "<span class='chev'>&#9662;</span>"
  "</div>"
  "<div id='sb2' class='coll-b'><div style='padding:10px 0 4px'>";

const char HTTP_FORM_END[] PROGMEM =
  "</div></div>"
  "<div style='margin-top:6px'>"
    "<button type='submit' class='btn'>CONNECT &amp; SAVE</button>"
  "</div>"
  "</form></div>";

const char HTTP_FORM_LABEL[]      PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[] PROGMEM = "<hr style='border-color:var(--border2);margin:10px 0'>";
const char HTTP_FORM_PARAM[]      PROGMEM =
  "<div class='fg'>"
    "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' placeholder='{t}' {c}>"
  "</div>\n";

/* ─────────────────────────────────────────────────────────────
   MISC UI ELEMENTS
   ───────────────────────────────────────────────────────────── */
const char HTTP_SCAN_LINK[] PROGMEM =
  "<br/><form action='/wifi?refresh=1' method='POST'>"
    "<button name='refresh' value='1' class='btn btn-g'>&#8635; Rescan Networks</button>"
  "</form>";

const char HTTP_SAVED[] PROGMEM =
  "<div class='sb P'>"
    "<svg width='14' height='14' viewBox='0 0 24 24' fill='none' stroke='currentColor' stroke-width='2'>"
      "<polyline points='20 6 9 17 4 12'/>"
    "</svg>"
    "Credentials saved &mdash; connecting to network&hellip;"
  "</div>";

const char HTTP_PARAMSAVED[] PROGMEM =
  "<div class='sb C'>"
    "<svg width='14' height='14' viewBox='0 0 24 24' fill='none' stroke='currentColor' stroke-width='2'>"
      "<polyline points='20 6 9 17 4 12'/>"
    "</svg>"
    "Parameters saved successfully"
  "</div>";

const char HTTP_BR[]    PROGMEM = "<br/>";

const char HTTP_END[] PROGMEM =
  "</div></div></div>"
  "<div class='toast' id='toast'></div>"
  "</body></html>";

const char HTTP_ERASEBTN[] PROGMEM =
  "<br/><form action='/erase' method='get'>"
    "<button class='btn btn-d btn-sm'>&times; Erase WiFi Config</button>"
  "</form>";

const char HTTP_UPDATEBTN[] PROGMEM =
  "<br/><form action='/update' method='get'>"
    "<button class='btn btn-g btn-sm'>&#8593; Firmware Update</button>"
  "</form>";

const char HTTP_BACKBTN[] PROGMEM =
  "<br/><form action='/' method='get'>"
    "<button class='btn btn-g btn-sm'>&#8592; Back</button>"
  "</form>";

/* ─────────────────────────────────────────────────────────────
   STATUS MESSAGES
   ───────────────────────────────────────────────────────────── */
const char HTTP_STATUS_ON[] PROGMEM =
  "<div class='sb C'>"
    "<svg width='14' height='14' viewBox='0 0 24 24' fill='none' stroke='currentColor' stroke-width='2'>"
      "<path d='M5 12.55a11 11 0 0 1 14.08 0M8.53 16.11a6 6 0 0 1 6.95 0M12 20h.01'/>"
    "</svg>"
    "<strong>Connected</strong>&nbsp;&mdash;&nbsp;{v}&nbsp;<small>({i})</small>"
  "</div>";

const char HTTP_STATUS_OFF[] PROGMEM =
  "<div class='sb {c}'>"
    "<svg width='14' height='14' viewBox='0 0 24 24' fill='none' stroke='currentColor' stroke-width='2'>"
      "<circle cx='12' cy='12' r='10'/><line x1='12' y1='8' x2='12' y2='12'/><line x1='12' y1='16' x2='12.01' y2='16'/>"
    "</svg>"
    "<strong>Not connected</strong>&nbsp;&mdash;&nbsp;{v}{r}"
  "</div>";

const char HTTP_STATUS_OFFPW[]    PROGMEM = " &mdash; Authentication failure";
const char HTTP_STATUS_OFFNOAP[]  PROGMEM = " &mdash; AP not found";
const char HTTP_STATUS_OFFFAIL[]  PROGMEM = " &mdash; Connection failed";
const char HTTP_STATUS_NONE[]     PROGMEM =
  "<div class='sb N'>No WiFi configured &mdash; scan and select a network</div>";

/* ─────────────────────────────────────────────────────────────
   INFO PAGE STRINGS
   ───────────────────────────────────────────────────────────── */
#ifdef ESP32
  const char HTTP_INFO_esphead[]   PROGMEM = "<div class='card'><div class='card-title'>SYSTEM &mdash; ESP32</div><div class='ig'>";
  const char HTTP_INFO_chiprev[]   PROGMEM = "<div class='ir'><span class='ik'>Chip Rev</span><span class='iv'>{1}</span></div>";
  const char HTTP_INFO_lastreset[] PROGMEM = "<div class='ir'><span class='ik'>Last Reset</span><span class='iv'>CPU0: {1} / CPU1: {2}</span></div>";
  const char HTTP_INFO_aphost[]    PROGMEM = "<div class='ir'><span class='ik'>AP Hostname</span><span class='iv'>{1}</span></div>";
  const char HTTP_INFO_psrsize[]   PROGMEM = "<div class='ir'><span class='ik'>PSRAM Size</span><span class='iv'>{1} bytes</span></div>";
  const char HTTP_INFO_temp[]      PROGMEM = "<div class='ir'><span class='ik'>Temperature</span><span class='iv'>{1}&deg;C / {2}&deg;F</span></div>";
  const char HTTP_INFO_hall[]      PROGMEM = "<div class='ir'><span class='ik'>Hall</span><span class='iv'>{1}</span></div>";
#else
  const char HTTP_INFO_esphead[]   PROGMEM = "<div class='card'><div class='card-title'>SYSTEM &mdash; ESP8266</div><div class='ig'>";
  const char HTTP_INFO_fchipid[]   PROGMEM = "<div class='ir'><span class='ik'>Flash Chip ID</span><span class='iv'>{1}</span></div>";
  const char HTTP_INFO_corever[]   PROGMEM = "<div class='ir'><span class='ik'>Core Version</span><span class='iv'>{1}</span></div>";
  const char HTTP_INFO_bootver[]   PROGMEM = "<div class='ir'><span class='ik'>Boot Version</span><span class='iv'>{1}</span></div>";
  const char HTTP_INFO_lastreset[] PROGMEM = "<div class='ir'><span class='ik'>Last Reset</span><span class='iv'>{1}</span></div>";
  const char HTTP_INFO_flashsize[] PROGMEM = "<div class='ir'><span class='ik'>Real Flash</span><span class='iv'>{1} bytes</span></div>";
#endif

const char HTTP_INFO_memsmeter[] PROGMEM = "<div class='pbar'><div class='pb-fill' style='width:{1}%%'></div></div></div></div>";
const char HTTP_INFO_memsketch[] PROGMEM =
  "<div class='ir'><span class='ik'>Sketch</span><span class='iv'>{1} / {2} bytes";
const char HTTP_INFO_freeheap[]  PROGMEM =
  "<div class='ir'><span class='ik'>Free Heap</span><span class='iv ok'>{1} bytes</span></div>";
const char HTTP_INFO_wifihead[]  PROGMEM =
  "</div></div><div class='card'><div class='card-title'>WIFI &mdash; NETWORK</div><div class='ig'>";
const char HTTP_INFO_uptime[]    PROGMEM =
  "<div class='ir'><span class='ik'>Uptime</span><span class='iv'>{1}m {2}s</span></div>";
const char HTTP_INFO_chipid[]    PROGMEM =
  "<div class='ir'><span class='ik'>Chip ID</span><span class='iv hl'>{1}</span></div>";
const char HTTP_INFO_idesize[]   PROGMEM =
  "<div class='ir'><span class='ik'>Flash Size</span><span class='iv'>{1} bytes</span></div>";
const char HTTP_INFO_sdkver[]    PROGMEM =
  "<div class='ir'><span class='ik'>SDK Version</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_cpufreq[]   PROGMEM =
  "<div class='ir'><span class='ik'>CPU Freq</span><span class='iv'>{1} MHz</span></div>";
const char HTTP_INFO_apip[]      PROGMEM =
  "<div class='ir'><span class='ik'>AP IP</span><span class='iv hl'>{1}</span></div>";
const char HTTP_INFO_apmac[]     PROGMEM =
  "<div class='ir'><span class='ik'>AP MAC</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_apssid[]    PROGMEM =
  "<div class='ir'><span class='ik'>AP SSID</span><span class='iv hl'>{1}</span></div>";
const char HTTP_INFO_apbssid[]   PROGMEM =
  "<div class='ir'><span class='ik'>BSSID</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_stassid[]   PROGMEM =
  "<div class='ir'><span class='ik'>STA SSID</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_staip[]     PROGMEM =
  "<div class='ir'><span class='ik'>STA IP</span><span class='iv ok'>{1}</span></div>";
const char HTTP_INFO_stagw[]     PROGMEM =
  "<div class='ir'><span class='ik'>Gateway</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_stasub[]    PROGMEM =
  "<div class='ir'><span class='ik'>Subnet</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_dnss[]      PROGMEM =
  "<div class='ir'><span class='ik'>DNS</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_host[]      PROGMEM =
  "<div class='ir'><span class='ik'>Hostname</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_stamac[]    PROGMEM =
  "<div class='ir'><span class='ik'>STA MAC</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_conx[]      PROGMEM =
  "<div class='ir'><span class='ik'>Connected</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_autoconx[]  PROGMEM =
  "<div class='ir'><span class='ik'>Autoconnect</span><span class='iv'>{1}</span></div>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<div class='ir'><span class='ik'>WiFiManager</span><span class='iv hl'>{1}</span></div>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<div class='ir'><span class='ik'>Arduino</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<div class='ir'><span class='ik'>ESP-SDK/IDF</span><span class='iv'>{1}</span></div>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<div class='ir'><span class='ik'>Build Date</span><span class='iv'>{1}</span></div>";

/* ─────────────────────────────────────────────────────────────
   OTA UPDATE PAGE
   ───────────────────────────────────────────────────────────── */
const char HTTP_UPDATE[] PROGMEM =
  "<div class='card'>"
    "<div class='card-title'>OTA FIRMWARE UPDATE</div>"
    "<p style='font-family:var(--mono);font-size:12px;color:var(--text-dim);margin-bottom:14px'>"
      "Select a .bin firmware file to upload"
    "</p>"
    "<form method='POST' action='u' enctype='multipart/form-data' "
      "onchange=\"(function(el){document.getElementById('ubin').style.display=el.value==''?'none':'block';})(this)\">"
      "<input type='file' name='update' accept='.bin,application/octet-stream' "
        "style='color:var(--text);font-family:var(--mono);font-size:12px'>"
      "<button id='ubin' type='submit' class='btn h' style='margin-top:12px'>&#8593; UPLOAD FIRMWARE</button>"
    "</form>"
    "<small style='font-family:var(--mono);font-size:10px;color:var(--text-dim);margin-top:10px;display:block'>"
      "* If captive portal blocks upload &mdash; open "
      "<a href='http://192.168.4.1/update' style='color:var(--cyan)'>http://192.168.4.1/update</a> directly"
    "</small>"
  "</div>";

const char HTTP_UPDATE_FAIL[] PROGMEM =
  "<div class='sb D'><strong>Update failed</strong> &mdash; Reboot and try again</div>";

const char HTTP_UPDATE_SUCCESS[] PROGMEM =
  "<div class='sb C'><strong>Update successful</strong> &mdash; Rebooting now&hellip;</div>";

/* ─────────────────────────────────────────────────────────────
   HELP PAGE
   ───────────────────────────────────────────────────────────── */
#ifndef WM_NOHELP
const char HTTP_HELP[] PROGMEM =
  "<div class='card'><div class='card-title'>AVAILABLE ROUTES</div>"
  "<div class='ig'>"
    "<div class='ir'><span class='ik'><a href='/' style='color:var(--cyan)'>/</a></span><span class='iv'>Portal home</span></div>"
    "<div class='ir'><span class='ik'><a href='/wifi' style='color:var(--cyan)'>/wifi</a></span><span class='iv'>Scan &amp; configure WiFi</span></div>"
    "<div class='ir'><span class='ik'><a href='/0wifi' style='color:var(--cyan)'>/0wifi</a></span><span class='iv'>Configure (no scan)</span></div>"
    "<div class='ir'><span class='ik'><a href='/param' style='color:var(--cyan)'>/param</a></span><span class='iv'>Custom parameters</span></div>"
    "<div class='ir'><span class='ik'><a href='/info' style='color:var(--cyan)'>/info</a></span><span class='iv'>System information</span></div>"
    "<div class='ir'><span class='ik'><a href='/update' style='color:var(--cyan)'>/update</a></span><span class='iv'>OTA firmware update</span></div>"
    "<div class='ir'><span class='ik'>/exit</span><span class='iv'>Exit config portal</span></div>"
    "<div class='ir'><span class='ik'>/restart</span><span class='iv'>Reboot device</span></div>"
    "<div class='ir'><span class='ik'>/erase</span><span class='iv'>Erase WiFi config</span></div>"
  "</div></div>"
  "<p style='font-family:var(--mono);font-size:11px;color:var(--text-dim);padding:10px 0'>"
    "GitHub: <a href='https://github.com/tzapu/WiFiManager' style='color:var(--cyan)'>tzapu/WiFiManager</a>"
  "</p>";
#else
const char HTTP_HELP[] PROGMEM = "";
#endif

/* ─────────────────────────────────────────────────────────────
   STRINGS — labels, messages
   ───────────────────────────────────────────────────────────── */
const char S_brand[]             PROGMEM = "WiFiManager";
const char S_debugPrefix[]       PROGMEM = "*wm:";
const char S_y[]                 PROGMEM = "Yes";
const char S_n[]                 PROGMEM = "No";
const char S_enable[]            PROGMEM = "Enabled";
const char S_disable[]           PROGMEM = "Disabled";
const char S_GET[]               PROGMEM = "GET";
const char S_POST[]              PROGMEM = "POST";
const char S_NA[]                PROGMEM = "Unknown";
const char S_passph[]            PROGMEM = "&#8226;&#8226;&#8226;&#8226;&#8226;&#8226;&#8226;&#8226;";
const char S_titlewifisaved[]    PROGMEM = "Credentials Saved";
const char S_titlewifisettings[] PROGMEM = "Settings Saved";
const char S_titlewifi[]         PROGMEM = "ESP32 // NET_CONFIG";
const char S_titleinfo[]         PROGMEM = "ESP32 // SYSTEM_INFO";
const char S_titleparam[]        PROGMEM = "ESP32 // PARAMETERS";
const char S_titleparamsaved[]   PROGMEM = "Parameters Saved";
const char S_titleexit[]         PROGMEM = "Exiting Portal";
const char S_titlereset[]        PROGMEM = "Device Reset";
const char S_titleerase[]        PROGMEM = "Config Erased";
const char S_titleclose[]        PROGMEM = "Portal Closed";
const char S_options[]           PROGMEM = "options";
const char S_nonetworks[]        PROGMEM =
  "<div style='text-align:center;padding:20px;font-family:var(--mono);font-size:12px;color:var(--text-dim)'>"
    "No networks found &mdash; tap Refresh to scan again"
  "</div>";
const char S_staticip[]          PROGMEM = "Static IP";
const char S_staticgw[]          PROGMEM = "Gateway";
const char S_staticdns[]         PROGMEM = "DNS Server";
const char S_subnet[]            PROGMEM = "Subnet";
const char S_exiting[]           PROGMEM =
  "<div class='sb P'>Portal exiting &mdash; you can close this page</div>";
const char S_resetting[]         PROGMEM =
  "<div class='sb P'>&#8635; Device will restart in a few seconds&hellip;</div>";
const char S_closing[]           PROGMEM =
  "<div class='sb N'>Portal closed &mdash; config portal remains active</div>";
const char S_error[]             PROGMEM =
  "<div class='sb D'>&times; An error occurred</div>";
const char S_notfound[]          PROGMEM = "404 Not Found\n\n";
const char S_uri[]               PROGMEM = "URI: ";
const char S_method[]            PROGMEM = "\nMethod: ";
const char S_args[]              PROGMEM = "\nArguments: ";
const char S_parampre[]          PROGMEM = "param_";

const char D_HR[] PROGMEM = "--------------------";

#ifdef ESP8266
  const char S_ssidpre[] PROGMEM = "ESP";
#elif defined(ESP32)
  const char S_ssidpre[] PROGMEM = "ESP32";
#else
  const char S_ssidpre[] PROGMEM = "WM";
#endif

#endif /* WIFI_MANAGER_OVERRIDE_STRINGS */
#endif /* _WM_STRINGS_EN_H_ */
