TEMPLATE = subdirs
SUBDIRS += \
    mock                \
#    elro                \
#    intertechno         \
#    networkdetector     \
#    conrad              \
#    openweathermap      \
#    lircd               \
#    wakeonlan           \
#    mailnotification    \
    philipshue          \
#    eq-3                \
#    wemo                \
#    lgsmarttv           \
#    datetime            \
#    genericelements     \
#    commandlauncher     \
#    unitec              \
#    leynew              \
#    udpcommander        \
    kodi                \
#    elgato              \
#    awattar             \
#    netatmo             \
#    dollhouse           \
#    plantcare           \
#    osdomotics          \
#    ws2812              \
#    orderbutton         \
#    denon               \
#    avahimonitor        \
#    pushbullet          \
#    usbwde              \
#    senic               \
#    multisensor         \
#    gpio                \

disabletesting {
    SUBDIRS -= mock
}
