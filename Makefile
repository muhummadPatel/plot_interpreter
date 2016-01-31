# Set PLATFORMIO to the platformio executable.
PLATFORMIO = /usr/local/bin/platformio

build:
	@echo "building..."
	$(PLATFORMIO) run

upload:
	@echo "uploading..."
	$(PLATFORMIO) run --target upload

clean:
	@echo "cleaning..."
	$(PLATFORMIO) run --target clean
